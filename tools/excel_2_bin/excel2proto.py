#! /usr/bin/python
# -*- encoding: utf-8 -*-

# Excel to Protobuf bin
# Copyright (c) 2015, calmwu
# All rights reserved.
# Email: wubo0067@hotmail.com

"""
	1：用protoc去生成proto对应的*.proto.ds文件
	2：解析proto.ds文件，生成Sheet_xxxx对象
	1：读取excel文件，各个sheet，sheet的名字对应
	层次分割符-是关键字，不能使用在cname中
"""

import xlrd
import sys
import os
import commands
import getopt
import re
import shutil
import ctypes
import time
import string

import yd_fieldoptions_pb2

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
from google.protobuf.descriptor_pb2 import DescriptorProto
from google.protobuf import text_format

from google.protobuf import descriptor_database
from google.protobuf import descriptor_pool
from google.protobuf import message_factory

def write_sheet_proto(excel_name, sheet_name, sheet_col_info, out_path):
	sheet_proto_name = excel_name+sheet_name+".proto"
	proto_file = open(sheet_proto_name, 'w')
	proto_file.write("package proto_ff;\n\n");
	proto_file.write("import \"yd_fieldoptions.proto\";\n\n");
	proto_file.write("message "+excel_name+sheet_name+"\n");
	proto_file.write("{\n");
	for index in xrange(0, len(sheet_col_info)):
		if sheet_col_info[index]["col_type"] == "int" or sheet_col_info[index]["col_type"] == "int32":
			proto_file.write("\toptional int32 " + sheet_col_info[index]["col_en_name"] + " = " + str(index + 1) + "[(yd_fieldoptions.field_cname) = \"" +sheet_col_info[index]["col_cn_name"] + "\"];\n")
		elif sheet_col_info[index]["col_type"] == "uint" or sheet_col_info[index]["col_type"] == "uint32":
			proto_file.write("\toptional uint32 " + sheet_col_info[index]["col_en_name"] + " = " + str(index + 1) + "[(yd_fieldoptions.field_cname) = \"" +sheet_col_info[index]["col_cn_name"] + "\"];\n")
		elif sheet_col_info[index]["col_type"] == "int64":
			proto_file.write("\toptional int64 " + sheet_col_info[index]["col_en_name"] + " = " + str(index + 1) + "[(yd_fieldoptions.field_cname) = \"" +sheet_col_info[index]["col_cn_name"] + "\"];\n")
		elif sheet_col_info[index]["col_type"] == "uint64":
			proto_file.write("\toptional uint64 " + sheet_col_info[index]["col_en_name"] + " = " + str(index + 1) + "[(yd_fieldoptions.field_cname) = \"" +sheet_col_info[index]["col_cn_name"] + "\"];\n")
		elif sheet_col_info[index]["col_type"] == "string":
			proto_file.write("\toptional string " + sheet_col_info[index]["col_en_name"] + " = " + str(index + 1) + "[(yd_fieldoptions.field_cname) = \"" +sheet_col_info[index]["col_cn_name"] + "\","+" (yd_fieldoptions.field_bufsize) = " + str(sheet_col_info[index]["col_max_size"]) + "];\n");


	proto_file.write("}\n");
	proto_file.close()
	print




def read_excel(excel_file, out_path):
	"""
	excel_file：文件名
	excel_sheetname：文件sheet名
	"""
	excel_fd = xlrd.open_workbook(excel_file)
	sheet_map = {}
	#循环所有sheet
	for sheet in excel_fd.sheets():
		if 0 == cmp(sheet.name, "main"):
			print "donot handle main"
		elif 0 == cmp(sheet.name, "list"):
			#找到对应的sheet
			#sheet的行数
			excel_sheet_row_count = sheet.nrows
			#sheet的列数
			excel_sheet_col_count = sheet.ncols

			#开始按行读取
			for row_index in xrange(0, excel_sheet_row_count):
				sheet_map[sheet.cell_value(row_index, 0)] = 1

	for sheet in excel_fd.sheets():
		if 0 != cmp(sheet.name, "main") and 0 != cmp(sheet.name, "list") and sheet_map.has_key(sheet.name):
			print "handle the excel:%s sheet:%s" % (excel_file, sheet.name)
			#找到对应的sheet
			#sheet的行数
			excel_sheet_row_count = sheet.nrows
			#sheet的列数
			excel_sheet_col_count = sheet.ncols
			sheet_col_info = []

			#开始按行读取
			for col_index in xrange(0, excel_sheet_col_count):
				col_sel = int(sheet.cell_value(3, col_index))
				col_type = sheet.cell_value(2, col_index)
				if col_sel != 2 and col_sel != 3:
					continue;

				one_col_info = {}
				one_col_info["col_en_name"] = sheet.cell_value(0, col_index)
				one_col_info["col_cn_name"] = sheet.cell_value(1, col_index)
				one_col_info["col_type"] = col_type
				one_col_info["col_max_size"] = int(32)
				if col_type == "string":
					for row_index in xrange(4, excel_sheet_row_count):
						string_value = str(sheet.cell_value(row_index, col_index))
						if len(string_value) > one_col_info["col_max_size"]:
							one_col_info["col_max_size"] = len(string_value)

				sheet_col_info.append(one_col_info)
			excel_file_name = os.path.splitext(os.path.basename(excel_file))
			excel_file_name = excel_file_name[0]
			write_sheet_proto(excel_file_name, sheet.name, sheet_col_info, out_path)

	sys.exit(-1)

def show_usage():
	print """usage for excel2bin example:
	./excel2bin --excel=x-1.xls
                --out_path=./"""

if __name__ == "__main__":
	(opts, args) = getopt.getopt(sys.argv[1:], "e:d:p:m:s:n:l:o", ["excel=", "out_path="])

	if( 0 == len( opts ) ):
		show_usage()
		sys.exit( -1 )

	excel_files = []
	excel_sheetnames = []
	out_path = ""

	reload(sys)
	sys.setdefaultencoding("utf-8")

	for (o, a) in opts:
		if o in ("-e", "--excel"):
			excel_files.append(a)
		elif o in ("-o", "--out_path"):
			out_path = a
		else:
			print "unknown command!"
			show_usage()
			sys.exit(-1)

	print "Input parameters:\n\texcel_files[%s]\n\t" % (excel_files)


    #读取excel
	for excel_file in excel_files:
		read_excel(excel_file, out_path)