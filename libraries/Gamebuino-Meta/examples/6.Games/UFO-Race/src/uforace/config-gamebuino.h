#define FOLDER_NAME "uforace"

#define NUM_HIGHSCORE 5
#define NAMELENGTH 10



#define SAVEBLOCK_NUM NUM_HIGHSCORE * 2
#define SAVECONF_SIZE NUM_HIGHSCORE * 2
#define SAVECONF { \
		SaveDefault(0, SAVETYPE_INT, 9999), \
		SaveDefault(1, SAVETYPE_BLOB, NAMELENGTH+1), \
		SaveDefault(2, SAVETYPE_INT, 9999), \
		SaveDefault(3, SAVETYPE_BLOB, NAMELENGTH+1), \
		SaveDefault(4, SAVETYPE_INT, 9999), \
		SaveDefault(5, SAVETYPE_BLOB, NAMELENGTH+1), \
		SaveDefault(6, SAVETYPE_INT, 9999), \
		SaveDefault(7, SAVETYPE_BLOB, NAMELENGTH+1), \
		SaveDefault(8, SAVETYPE_INT, 9999), \
		SaveDefault(9, SAVETYPE_BLOB, NAMELENGTH+1), \
	}
