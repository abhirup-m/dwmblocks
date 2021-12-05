static const Block blocks[] = {
	{"", "~/.local/bin/dwmblock_scripts/music-show", 0, 11},
	/* {"", "", 0, 11}, */
	{"", "xclip -o -selection clipboard | xargs -r -d '\n' /usr/bin/google-chrome-beta &> /dev/null", 0, 12},
	{"", "volume -s 2> /dev/null &> /dev/null &", 0, 8},
	/* {" ", "~/.local/bin/dwmblock_scripts/wifi-show", 0, 10}, */
	{" ", "", 0, 10},
	{" 🗓 ", "date '+%b %d,%a'", 300, 0},
	//{" 🗓 ", "date '+%b %d,%a'; change_wall", 300, 0},
	{" ⏰ ", "date '+%I:%M %p'", 60, 9},
	{" ", "~/.local/bin/dwmblock_scripts/battery-show", 300, 9},
};
static char delim = ' ';
