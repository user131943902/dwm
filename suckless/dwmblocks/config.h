//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	// {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	// {"",	"~/.local/bin/statusbar/sb-tasks",	10,	26},
	/* {"",	"~/.local/bin/statusbar/sb-music",	0,	11}, */
	// {"",	"~/.local/bin/statusbar/sb-pacpackages",	0,	8},
	// {"",	"~/.local/bin/statusbar/sb-news",		0,	6},
	/* {"",	"~/.local/bin/statusbar/sb-price xmr-btc \"Monero to Bitcoin\" 🔒 25",	9000,	25}, */
	/* {"",	"~/.local/bin/statusbar/sb-price xmr Monero 🔒 24",			9000,	24}, */
	/* {"",	"~/.local/bin/statusbar/sb-price eth Ethereum 🍸 23",			9000,	23}, */
	/* {"",	"~/.local/bin/statusbar/sb-price btc Bitcoin 💰 21",			9000,	21}, */
	// {"",	"~/.local/bin/statusbar/sb-torrent",	20,	7},
	/* {"",	"~/.local/bin/statusbar/sb-memory",	10,	14}, */
	/* {"",	"~/.local/bin/statusbar/sb-cpu",		10,	18}, */
	/* {"",	"~/.local/bin/statusbar/sb-moonphase",	18000,	17}, */
	// {"",	"~/.local/bin/statusbar/sb-doppler",	0,	13},
	// {"",	"~/.local/bin/statusbar/sb-forecast",	18000,	5},
	// {"",	"~/.local/bin/statusbar/sb-mailbox",	180,	12},
	// {"",	"~/.local/bin/statusbar/sb-nettraf",	1,	16},
	{"",	"~/.local/bin/statusbar/sb-volume",	0,	10},
	{"",	"~/.local/bin/statusbar/sb-battery",	5,	3},
	{"",	"~/.local/bin/statusbar/sb-clock",	60,	1},
	// {"",	"~/.local/bin/statusbar/sb-internet",	5,	4},
	// {"",	"~/.local/bin/statusbar/sb-iplocate", 0,	27}, 
	// {"",	"~/.local/bin/statusbar/sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
