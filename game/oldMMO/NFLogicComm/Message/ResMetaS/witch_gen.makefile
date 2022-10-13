include ./define.makefile

.PHONY:all

all:${PROTOCGEN_FILE_PATH}/witchaward.bin ${PROTOCGEN_FILE_PATH}/WitchAwardDesc.h ${PROTOCGEN_FILE_PATH}/WitchAwardDesc.cpp ${PROTOCGEN_FILE_PATH}/witchsummon.bin ${PROTOCGEN_FILE_PATH}/WitchSummonDesc.h ${PROTOCGEN_FILE_PATH}/WitchSummonDesc.cpp ${PROTOCGEN_FILE_PATH}/witchrewardExp.bin ${PROTOCGEN_FILE_PATH}/WitchRewardexpDesc.h ${PROTOCGEN_FILE_PATH}/WitchRewardexpDesc.cpp 

${PROTOCGEN_FILE_PATH}/witchaward.bin:${PROTOCGEN_FILE_PATH}/witch.proto.ds ${RESDB_EXCELMMO_PATH}/witch.xlsx
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/witch.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/witch.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_witchaward  --excel_sheetname=award  --proto_msgname=witchaward  --start_row=4 --out_path=${PROTOCGEN_FILE_PATH}/;
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/witchaward.bin" --dst=${GAME_DATA_PATH}/
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/WitchAwardDesc.h ${PROTOCGEN_FILE_PATH}/WitchAwardDesc.cpp" --dst=${DESC_STORE_PATH}/

${PROTOCGEN_FILE_PATH}/witchsummon.bin:${PROTOCGEN_FILE_PATH}/witch.proto.ds ${RESDB_EXCELMMO_PATH}/witch.xlsx
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/witch.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/witch.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_witchsummon  --excel_sheetname=summon  --proto_msgname=witchsummon  --start_row=4 --out_path=${PROTOCGEN_FILE_PATH}/;
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/witchsummon.bin" --dst=${GAME_DATA_PATH}/
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/WitchSummonDesc.h ${PROTOCGEN_FILE_PATH}/WitchSummonDesc.cpp" --dst=${DESC_STORE_PATH}/

${PROTOCGEN_FILE_PATH}/witchrewardExp.bin:${PROTOCGEN_FILE_PATH}/witch.proto.ds ${RESDB_EXCELMMO_PATH}/witch.xlsx
	mkdir -p ${PROTOCGEN_FILE_PATH}
	${EXCEL2BIN_MMO} --excel=${RESDB_EXCELMMO_PATH}/witch.xlsx  --proto_ds=${PROTOCGEN_FILE_PATH}/witch.proto.ds --proto_package=proto_ff \
		--proto_sheet_msgname=Sheet_witchrewardExp  --excel_sheetname=rewardExp  --proto_msgname=witchrewardExp  --start_row=4 --out_path=${PROTOCGEN_FILE_PATH}/;
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/witchrewardExp.bin" --dst=${GAME_DATA_PATH}/
	${FILE_COPY_EXE} --src="${PROTOCGEN_FILE_PATH}/WitchRewardexpDesc.h ${PROTOCGEN_FILE_PATH}/WitchRewardexpDesc.cpp" --dst=${DESC_STORE_PATH}/
