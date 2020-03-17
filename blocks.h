static const Block blocks[] = {
	{"", "music-show", 0, 11},
	{"", "mail-show", 0, 8},
	{"", "wifi-show", 0, 10},
	{"   ", "date '+%b %d,%a'", 3600, 0},
	{"   ", "date '+%I:%M %p'", 60, 9},
	{"  ", "battery-show", 300, 9},
};
static char delim = ' ';
