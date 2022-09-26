include ./define.makefile

.PHONY:all

all:${GAME_DATA_PATH}/buttonbutton.bin 

${GAME_DATA_PATH}/buttonbutton.bin:${RESDB_META_DESCRIPTOR} ${RESDB_EXCELMMO_PATH}/button.xlsx
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/button.xlsx  --proto_ds=${RESDB_META_DESCRIPTOR} --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_buttonbutton  --excel_sheetname=button  --proto_msgname=buttonbutton  --start_row=4 --out_path=${GAME_DATA_PATH}/
