include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/gm5Helpcons.bin ${GAME_DATA_PATH}/gm5Helpreward.bin 

${GAME_DATA_PATH}/gm5Helpcons.bin:${PROTOCGEN_FILE_PATH}/gm5Help.proto.ds ${RESDB_EXCELMMO_PATH}/gm5Help.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/gm5Help.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/gm5Help.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_gm5Helpcons  --excel_sheetname=cons  --proto_msgname=gm5Helpcons  --start_row=4 --out_path=${GAME_DATA_PATH}/

${GAME_DATA_PATH}/gm5Helpreward.bin:${PROTOCGEN_FILE_PATH}/gm5Help.proto.ds ${RESDB_EXCELMMO_PATH}/gm5Help.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/gm5Help.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/gm5Help.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_gm5Helpreward  --excel_sheetname=reward  --proto_msgname=gm5Helpreward  --start_row=4 --out_path=${GAME_DATA_PATH}/

