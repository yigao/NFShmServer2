include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/intimacyintimacy.bin ${GAME_DATA_PATH}/intimacygift.bin 

${GAME_DATA_PATH}/intimacyintimacy.bin:${RESDB_META_DESCRIPTOR} ${RESDB_EXCELMMO_PATH}/intimacy.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/intimacy.xlsx  --proto_ds=${RESDB_META_DESCRIPTOR} --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_intimacyintimacy  --excel_sheetname=intimacy  --proto_msgname=intimacyintimacy  --start_row=4 --out_path=${GAME_DATA_PATH}/

${GAME_DATA_PATH}/intimacygift.bin:${RESDB_META_DESCRIPTOR} ${RESDB_EXCELMMO_PATH}/intimacy.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/intimacy.xlsx  --proto_ds=${RESDB_META_DESCRIPTOR} --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_intimacygift  --excel_sheetname=gift  --proto_msgname=intimacygift  --start_row=4 --out_path=${GAME_DATA_PATH}/
