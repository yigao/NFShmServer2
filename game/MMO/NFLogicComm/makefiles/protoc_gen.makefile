include ./define.makefile
.PHONY:all

all:${ALL_PROTOCGEN_FILE} ${ALL_PROTOC_DESCRIPTOR_FILE}

${PROTOCOL_SS_LOGIC_H} ${PROTOCOL_SS_LOGIC_CPP} :${PROTOCOL_SS_LOGIC_XML} ${PROTOCOL_COMM_XML} ${PROTOCOL_FIELD_XML}
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${PROTOC} $^ -I${THIRD_PARTY_INC_PATH} -I${PROTOCOL_COMM_PATH} -I${PROTOCOL_SS_PATH} -I${PROTOCOL_SS_LOGIC_PATH}  -I${PROTOCOL_KERNEL_PATH}\
		--cpp_out=${PROTOCGEN_FILE_PATH}
	cp ${PROTOCOL_SS_LOGIC_H} ${PROTOCOL_SS_LOGIC_CPP} ${NEW_PROTOCGEN_FILE_PATH} -rf

${RESDB_DESC_H} ${RESDB_DESC_CPP} ${RESDB_DESC_STRUCT_H} ${RESDB_DESC_STRUCT_CPP} ${RESDB_META_DESCRIPTOR}:${RESDB_DESC_XML} ${PROTOCOL_COMM_XML} ${FIELD_OPTIONS_XML}
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${PROTOC} $^ -I${THIRD_PARTY_INC_PATH} -I${RESDB_META_PATH} -I${PROTOCOL_COMM_PATH} -I${PROTOCOL_SS_LOGIC_PATH} -I${PROTOCOL_KERNEL_PATH}\
			--include_imports --descriptor_set_out=${RESDB_META_DESCRIPTOR} --cpp_out=${PROTOCGEN_FILE_PATH}
	for xml in $(RESDB_DESC_XML2);do\
		${PROTO2STRUCT} --proto_ds=${RESDB_META_DESCRIPTOR} --proto_fname=$$xml --out_path=${PROTOCGEN_FILE_PATH}/;\
		echo $$xml;\
	done
	cp ${RESDB_DESC_H} ${RESDB_DESC_CPP} ${RESDB_DESC_STRUCT_H} ${RESDB_DESC_STRUCT_CPP} ${NEW_PROTOCGEN_FILE_PATH} -rf



