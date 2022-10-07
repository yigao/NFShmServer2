// -------------------------------------------------------------------------
//    @FileName         :    NFNFEmailSender.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFNFEmailSender.cpp
//
// -------------------------------------------------------------------------

#include "NFEmailSender.h"
#include "NFLogMgr.h"
#include "NFComm/NFCore/NFBase64.h"
#include "NFComm/NFPluginModule/NFCheck.h"

#include <iostream>
#include <sstream>
#include <fstream>
 
CSmtpSendMail::CSmtpSendMail(const std::string & charset)
{
    m_strCharset = charset;
    m_vRecvMail.clear();
}
 
void CSmtpSendMail::SetSmtpServer(const std::string & username, const std::string &password, const std::string & servername, const std::string & port)
{
    m_strUserName = username;
    m_strPassword = password;
    m_strServerName = servername;
    m_strPort = port;
}
 
void CSmtpSendMail::SetSendName(const std::string & sendname)
{
    std::string strTemp = "";
    strTemp += "=?";
    strTemp += m_strCharset;
    strTemp += "?B?";
    strTemp += NFBase64::Encode(sendname);//base64_encode((unsigned char *)sendname.c_str(), sendname.size());
    strTemp += "?=";
    m_strSendName = strTemp;
    //m_strSendName = sendname;
}
 
void CSmtpSendMail::SetSendMail(const std::string & sendmail)
{
    m_strSendMail = sendmail;
}
 
void CSmtpSendMail::AddRecvMail(const std::string & recvmail)
{
    m_vRecvMail.push_back(recvmail);
}
 
void CSmtpSendMail::SetSubject(const std::string & subject)
{
    std::string strTemp = "";
    strTemp = "Subject: ";
    strTemp += "=?";
    strTemp += m_strCharset;
    strTemp += "?B?";
    strTemp += NFBase64::Encode(subject);//base64_encode((unsigned char *)subject.c_str(), subject.size());
    strTemp += "?=";
    m_strSubject = strTemp;
}
 
void CSmtpSendMail::SetBodyContent(const std::string & content)
{
    m_strContent = content;
}
 
void CSmtpSendMail::AddAttachment(const std::string & filename)
{
    m_vAttachMent.push_back(filename);
}
 
bool CSmtpSendMail::SendMail()
{
    CreatMessage();
    bool ret = true;
    CURL *curl;
    CURLcode res = CURLE_OK;
    struct curl_slist *recipients = NULL;
    curl = curl_easy_init();
    if (curl)
    {
        /* Set username and password */
        curl_easy_setopt(curl, CURLOPT_USERNAME, m_strUserName.c_str());
        curl_easy_setopt(curl, CURLOPT_PASSWORD, m_strPassword.c_str());
        std::string tmp = "smtps://";
        tmp += m_strServerName;
        tmp += ":";
        tmp += m_strPort;
        // 注意不能直接传入tmp，应该带上.c_str()，否则会导致下面的
        // curl_easy_perform调用返回CURLE_COULDNT_RESOLVE_HOST错误
        // 码
        curl_easy_setopt(curl, CURLOPT_URL, tmp.c_str());
        /* If you want to connect to a site who isn't using a certificate that is
        * signed by one of the certs in the CA bundle you have, you can skip the
        * verification of the server's certificate. This makes the connection
        * A LOT LESS SECURE.
        *
        * If you have a CA cert for the server stored someplace else than in the
        * default bundle, then the CURLOPT_CAPATH option might come handy for
        * you. */
#ifdef SKIP_PEER_VERIFICATION
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
#endif
        /* If the site you're connecting to uses a different host name that what
        * they have mentioned in their server certificate's commonName (or
        * subjectAltName) fields, libcurl will refuse to connect. You can skip
        * this check, but this will make the connection less secure. */
#ifdef SKIP_HOSTNAME_VERIFICATION
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
#endif
        /* Note that this option isn't strictly required, omitting it will result
        * in libcurl sending the MAIL FROM command with empty sender data. All
        * autoresponses should have an empty reverse-path, and should be directed
        * to the address in the reverse-path which triggered them. Otherwise,
        * they could cause an endless loop. See RFC 5321 Section 4.5.5 for more
        * details.
        */
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, m_strSendMail.c_str());
        /* Add two recipients, in this particular case they correspond to the
        * To: and Cc: addressees in the header, but they could be any kind of
        * recipient. */
        for (size_t i = 0; i < m_vRecvMail.size(); i++)
        {
            recipients = curl_slist_append(recipients, m_vRecvMail[i].c_str());
        }
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);
        std::stringstream stream;
        stream.str(m_strMessage.c_str());
        stream.flush();
        /* We're using a callback function to specify the payload (the headers and
        * body of the message). You could just use the CURLOPT_READDATA option to
        * specify a FILE pointer to read from. */
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, &CSmtpSendMail::payload_source);
        curl_easy_setopt(curl, CURLOPT_READDATA, (void *)&stream);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
        /* Since the traffic will be encrypted, it is very useful to turn on debug
        * information within libcurl to see what is happening during the
        * transfer */
        int nTimes = 0;
        /* Send the message */
        res = curl_easy_perform(curl);
        CURLINFO info = CURLINFO_NONE;
        long http_version = 0;
        curl_easy_getinfo(curl, info, &http_version);
        /* Check for errors */
        while (res != CURLE_OK)
        {
            nTimes++;
            if (nTimes > 5)
            {
                break;
            }
            fprintf(stderr, "curl_easy_perform() failed: %s\n\n", curl_easy_strerror(res));
            ret = false;
            /*				Sleep( 100 );
            res = curl_easy_perform(curl); */
        }
        /* Free the list of recipients */
        curl_slist_free_all(recipients);
        /* Always cleanup */
        curl_easy_cleanup(curl);
    }
    return ret;
}
 
size_t CSmtpSendMail::payload_source(void *ptr, size_t size, size_t nmemb, void *stream)
{
    size_t num_bytes = size * nmemb;
    char* data = (char*)ptr;
    std::stringstream* strstream = (std::stringstream*)stream;
    strstream->read(data, num_bytes);
    return strstream->gcount();
}
 
void CSmtpSendMail::CreatMessage()
{
    m_strMessage = "From: ";
    m_strMessage += m_strSendName + "<" + m_strSendMail + ">"/*m_strSendMail*/;
    m_strMessage += "\r\nReply-To: ";
    m_strMessage += m_strSendMail;
    m_strMessage += "\r\nTo: ";
    for (size_t i = 0; i < m_vRecvMail.size(); i++)
    {
        if (i > 0)
        {
            m_strMessage += ",";
        }
        m_strMessage += m_vRecvMail[i];
    }
    m_strMessage += "\r\n";
    m_strMessage += m_strSubject;
    m_strMessage += "\r\nX-Mailer: JXO Mailer V1.2";
    m_strMessage += "\r\nMime-Version: 1.0";
    // 	m_strMessage += "\r\nContent-Type: multipart/mixed;";
    // 	m_strMessage += "boundary=\"simple boundary\"";
    // 	m_strMessage += "\r\nThis is a multi-part message in MIME format.";
    // 	m_strMessage += "\r\n--simple boundary";
    //正文
    m_strMessage += "\r\nContent-Type: text/html;";
    m_strMessage += "charset=";
    m_strMessage += "\"";
    m_strMessage += m_strCharset;
    m_strMessage += "\"";
    m_strMessage += "\r\nContent-Transfer-Encoding: 7BIT";
    m_strMessage += "\r\n\r\n";
    m_strMessage += m_strContent;
    //附件
    std::string filename = "";
    std::string filetype = "";
    for (size_t i = 0; i < m_vAttachMent.size(); i++)
    {
        m_strMessage += "\r\n--simple boundary";
        GetFileName(m_vAttachMent[i], filename);
        GetFileType(m_vAttachMent[i], filetype);
        SetContentType(filetype);
        SetFileName(filename);
        m_strMessage += "\r\nContent-Type: ";
        m_strMessage += m_strContentType;
        m_strMessage += "\tname=";
        m_strMessage += "\"";
        m_strMessage += m_strFileName;
        m_strMessage += "\"";
        m_strMessage += "\r\nContent-Disposition:attachment;filename=";
        m_strMessage += "\"";
        m_strMessage += m_strFileName;
        m_strMessage += "\"";
        m_strMessage += "\r\nContent-Transfer-Encoding:base64";
        m_strMessage += "\r\n\r\n";
        FILE *pt = NULL;
        if ((pt = fopen(m_vAttachMent[i].c_str(), "rb")) == NULL)
        {
            std::cerr << "打开文件失败: " << m_vAttachMent[i] << std::endl;
            continue;
        }
        fseek(pt, 0, SEEK_END);
        int len = ftell(pt);
        fseek(pt, 0, SEEK_SET);
        int rlen = 0;
        char buf[55];
        for (int j = 0; j < len / 54 + 1; j++)
        {
            memset(buf, 0, 55);
            rlen = fread(buf, sizeof(char), 54, pt);
            m_strMessage += NFBase64::Encode(std::string(buf, rlen));//base64_encode((const unsigned char*)buf, rlen);
            m_strMessage += "\r\n";
        }
        fclose(pt);
        pt = NULL;
    }
    /*	m_strMessage += "\r\n--simple boundary--\r\n";*/
}
 
 
int CSmtpSendMail::GetFileType(std::string const & stype)
{
    if (stype == "txt")
    {
        return 0;
    }
    else if (stype == "xml")
    {
        return 1;
    }
    else if (stype == "html")
    {
        return 2;
    }
    else if (stype == "jpeg")
    {
        return 3;
    }
    else if (stype == "png")
    {
        return 4;
    }
    else if (stype == "gif")
    {
        return 5;
    }
    else if (stype == "exe")
    {
        return 6;
    }
    return -1;
}
 
void CSmtpSendMail::SetFileName(const std::string & FileName)
{
    std::string EncodedFileName = "=?";
    EncodedFileName += m_strCharset;
    EncodedFileName += "?B?";//修改
    EncodedFileName += NFBase64::Encode(FileName);//base64_encode((unsigned char *)FileName.c_str(), FileName.size());
    EncodedFileName += "?=";
    m_strFileName = EncodedFileName;
}
 
void CSmtpSendMail::SetContentType(std::string const & stype)
{
    int type = GetFileType(stype);
    switch (type)
    {
    //
    case 0:
        m_strContentType = "plain/text;";
        break;
    case 1:
        m_strContentType = "text/xml;";
        break;
    case 2:
        m_strContentType = "text/html;";
    case 3:
        m_strContentType = "image/jpeg;";
        break;
    case 4:
        m_strContentType = "image/png;";
        break;
    case 5:
        m_strContentType = "image/gif;";
        break;
    case 6:
        m_strContentType = "application/x-msdownload;";
        break;
    default:
        m_strContentType = "application/octet-stream;";
        break;
    }
}
 
void CSmtpSendMail::GetFileName(const std::string& file, std::string& filename)
{
    std::string::size_type p = file.find_last_of('/');
    if (p == std::string::npos)
        p = file.find_last_of('\\');
    if (p != std::string::npos)
    {
        p += 1; // get past folder delimeter
        filename = file.substr(p, file.length() - p);
    }
}
 
void CSmtpSendMail::GetFileType(const std::string & file, std::string & stype)
{
    std::string::size_type p = file.find_last_of('.');
    if (p != std::string::npos)
    {
        p += 1; // get past folder delimeter
        stype = file.substr(p, file.length() - p);
    }
}