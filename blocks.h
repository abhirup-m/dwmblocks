//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "music-show", 0,	11},
	{"", "mail-show", 300, 10},
	{"", "wifi-show", 0, 10},
	{"   ", "date '+%b %d,%a'", 3600, 0},
	{"   ", "date '+%I:%M %p'", 60, 9},
	{"  ", "battery-show", 60, 9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
