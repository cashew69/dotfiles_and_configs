static const char norm_fg[] = "#b3b8cf";
static const char norm_bg[] = "#0d0f12";
static const char norm_border[] = "#7d8090";

static const char sel_fg[] = "#b3b8cf";
static const char sel_bg[] = "#A17755";
static const char sel_border[] = "#b3b8cf";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
