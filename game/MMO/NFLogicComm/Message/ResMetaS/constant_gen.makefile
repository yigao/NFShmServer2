include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/constantconstant.bin 

${GAME_DATA_PATH}/constantconstant.bin:${PROTOCGEN_FILE_PATH}/constant.proto.ds ${RESDB_EXCELMMO_PATH}/constant.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/constant.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/constant.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_constantconstant  --excel_sheetname=constant  --proto_msgname=constantconstant  --start_row=4 --out_path=${GAME_DATA_PATH}/

