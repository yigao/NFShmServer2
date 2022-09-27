include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/tasktrackertasktracker.bin 

${GAME_DATA_PATH}/tasktrackertasktracker.bin:${PROTOCGEN_FILE_PATH}/tasktracker.proto.ds ${RESDB_EXCELMMO_PATH}/tasktracker.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/tasktracker.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/tasktracker.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_tasktrackertasktracker  --excel_sheetname=tasktracker  --proto_msgname=tasktrackertasktracker  --start_row=4 --out_path=${GAME_DATA_PATH}/

