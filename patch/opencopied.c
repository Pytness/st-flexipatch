void opencopied(const Arg* arg) {
	int res;
	const size_t max_cmd = 2048;
	char* const clip     = xsel.clipboard;
	if (!clip) {
		fprintf(stderr, "Warning: nothing copied to clipboard\n");
		return;
	}

	/* account for space/quote (3) and \0 (1) and & (1) */
	/* e.g.: xdg-open "https://st.suckless.org"& */
	const size_t cmd_size = max_cmd + strlen(clip) + 5;
	char cmd[cmd_size];

	snprintf(cmd, cmd_size, "%s \"%s\"&", (char*)arg->v, clip);
	res = system(cmd);
}