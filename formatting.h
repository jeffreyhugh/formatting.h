/**
 * @file formatting.h
 * @brief ANSI escape sequences for formatting
 * @details This file contains ANSI escape sequences for formatting, as well as
 * two special ASCII characters -- a block and an arrow. This file allows
 * programmers to easily make their programs look better. Inspiration from
 * the powerlevel10k ohmyzsh! theme.
 *
 * @author QueueBot (github.com/qbxt)
 * @date March 2, 2020
 * @see github.com/qbxt
 * @version 1.0.1
 * @remark For examples and license info, please see README
 */

#ifndef FORMATTING_H_
#define FORMATTING_H_


/* Reset */
#define RESET "\x1b[0m" /* Total reset */
#define FG_RESET "\x1b[39m" /* Reset foreground color */
#define BG_RESET "\x1b[49m" /* Reset background color */


/* Character Formatting */
#define REV "\x1b[7m" /* Reverse colors (foreground->background & vice versa) */
#define NOREV "\x1b[27m" /* Unreverse */

#define BOLD "\x1b[1m" /* Bold */
#define NOBOLD "\x1b[22m" /* Unbold */

#define FAINT "\x1b[2m" /* Faint */
#define NOFAINT "\x1b[22m" /* Unfaint */

#define ITALIC "\x1b[3m" /* Italic, frequently unsupported */
#define NOITALIC "\x1b[23m" /* Unitalic, frequently unsupported */

#define STRIKE "\x1b[9m" /* Strikethrough */
#define NOSTRIKE "\x1b[29m" /* Unstrikethrough */


/* Foreground colors */
#define FG_BLACK "\x1b[30m"
#define FG_RED "\x1b[31m"
#define FG_GREEN "\x1b[32m"
#define FG_YELLOW "\x1b[33m"
#define FG_BLUE "\x1b[34m"
#define FG_MAGENTA "\x1b[35m"
#define FG_CYAN "\x1b[36m"
#define FG_WHITE "\x1b[37m"


/* Background colors */
#define BG_BLACK "\x1b[40m"
#define BG_RED "\x1b[41m"
#define BG_GREEN "\x1b[42m"
#define BG_YELLOW "\x1b[43m"
#define BG_BLUE "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN "\x1b[46m"
#define BG_WHITE "\x1b[47m"


/* Bright foreground colors (frequently unsupported) */
#define BFG_BLACK "\x1b[90m"
#define BFG_RED "\x1b[91m"
#define BFG_GREEN "\x1b[92m"
#define BFG_YELLOW "\x1b[93m"
#define BFG_BLUE "\x1b[94m"
#define BFG_MAGENTA "\x1b[95m"
#define BFG_CYAN "\x1b[96m"
#define BFG_WHITE "\x1b[97m"


/* Bright background colors (frequently unsupported) */
#define BBG_BLACK "\x1b[100m"
#define BBG_RED "\x1b[101m"
#define BBG_GREEN "\x1b[102m"
#define BBG_YELLOW "\x1b[103m"
#define BBG_BLUE "\x1b[104m"
#define BBG_MAGENTA "\x1b[105m"
#define BBG_CYAN "\x1b[106m"
#define BBG_WHITE "\x1b[107m"


/* ASCII characters */
#define BLOCK "█"
#define ARROW ""




#endif
