static const Block blocks[] = {
	{"", "~/.local/bin/dwmblock_scripts/music-show", 0, 11},
	{"", "volume -s 2> /dev/null &> /dev/null &", 0, 8},
	{" ", "~/.local/bin/dwmblock_scripts/wifi-show", 0, 10},
	{" 🗓 ", "date '+%b %d,%a'", 3600, 0},
	{" ⏰ ", "date '+%I:%M %p'", 60, 9},
	{" ", "~/.local/bin/dwmblock_scripts/battery-show", 300, 9},
	{"", "~/.local/bin/dwmscripts/mail-show 2> /dev/null &> /dev/null &", 120, 7},
};
static char delim = ' ';
