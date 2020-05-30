static const Block blocks[] = {
	{"", "music-show", 0, 11},
	{" ", "wifi-show", 0, 10},
	{" 🗓 ", "date '+%b %d,%a'; finder ~ | sort &> ~/.cache/finderlist", 3600, 0},
	{" ⏰ ", "date '+%I:%M %p'", 60, 9},
	{" ", "volume-show", 0, 8},
	{" ", "battery-show", 300, 9},
};
static char delim = ' ';
