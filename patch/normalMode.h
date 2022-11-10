void normalMode();
void historyPreDraw();
void historyOverlay(int x, int y, Glyph* g);
void historyModeToggle(int start);
void historyOpToggle(int, int);

typedef enum {
    failed     = 0,
    success    = 1,
    exitMotion = 2,
    exitOp     = 3,
    finish     = 4
} ExitState;

ExitState kPressHist(const char* txt, size_t len, int ctrl, const KeySym* kSym);
ExitState pressKeys(const char* s, size_t e);
