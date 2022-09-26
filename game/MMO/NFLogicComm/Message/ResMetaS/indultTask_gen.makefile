include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/indultTaskindultTask.bin ${GAME_DATA_PATH}/indultTasktask.bin 

${GAME_DATA_PATH}/indultTaskindultTask.bin:${RESDB_META_DESCRIPTOR} ${RESDB_EXCELMMO_PATH}/indultTask.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/indultTask.xlsx  --proto_ds=${RESDB_META_DESCRIPTOR} --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_indultTaskindultTask  --excel_sheetname=indultTask  --proto_msgname=indultTaskindultTask  --start_row=4 --out_path=${GAME_DATA_PATH}/

${GAME_DATA_PATH}/indultTasktask.bin:${RESDB_META_DESCRIPTOR} ${RESDB_EXCELMMO_PATH}/indultTask.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/indultTask.xlsx  --proto_ds=${RESDB_META_DESCRIPTOR} --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_indultTasktask  --excel_sheetname=task  --proto_msgname=indultTasktask  --start_row=4 --out_path=${GAME_DATA_PATH}/
