include ./define.makefile

.PHONY:all

all:${PROTOCGEN_FILE_PATH}/tasktrackertasktracker.bin ${PROTOCGEN_FILE_PATH}/TasktrackerTasktrackerDesc.h ${PROTOCGEN_FILE_PATH}/TasktrackerTasktrackerDesc.cpp 

${PROTOCGEN_FILE_PATH}/tasktrackertasktracker.bin:${PROTOCGEN_FILE_PATH}/tasktracker.proto.ds ${RESDB_EXCELMMO_PATH}/tasktracker.xlsx
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/tasktracker.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/tasktracker.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_tasktrackertasktracker  --excel_sheetname=tasktracker  --proto_msgname=tasktrackertasktracker  --start_row=4 --out_path=${PROTOCGEN_FILE_PATH}/;
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/tasktrackertasktracker.bin" --dst=${GAME_DATA_PATH}/
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/TasktrackerTasktrackerDesc.h ${PROTOCGEN_FILE_PATH}/TasktrackerTasktrackerDesc.cpp" --dst=${DESC_STORE_PATH}/

