/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Montserrat:style=Regular:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm] =          { "#CDD6F4", "#1E1E2E" },
	[SchemeSel] =           { "#CDD6F4", "#303446" },
	[SchemeOut] =           { "#1E1E2E", "#BABBF1" },
	[SchemeSelHighlight] =  { "#E0AFA5", "#303446" },
	[SchemeNormHighlight] = { "#E0AFA5", "#1E1E2E" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 22;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 22;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;

/* Window geometry */
static int dmx = 1594; /* put dmenu at this x offset */
static int dmy = 36; /* put dmenu at this y offset (measured from the bottom if topbar is 0) */
static unsigned int dmw = 310; /* make dmenu this wide */
