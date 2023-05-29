/*******************************************************************************
 * Size: 22 px
 * Bpp: 1
 * Opts: --bpp 1 --size 22 --font C:\Users\Windows 10\Documents\GitHub\FormulaCEM\DashBoard EV 2023\SquareLine Project\assets\sui-generis.ttf -o C:\Users\Windows 10\Documents\GitHub\FormulaCEM\DashBoard EV 2023\SquareLine Project\assets\ui_font_SuiGen22.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_SUIGEN22
#define UI_FONT_SUIGEN22 1
#endif

#if UI_FONT_SUIGEN22

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xe8, 0x1, 0xf8,

    /* U+0022 "\"" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xc0,

    /* U+0023 "#" */
    0x18, 0x60, 0x61, 0x81, 0x86, 0x3f, 0xff, 0xff,
    0xfc, 0x61, 0x81, 0x86, 0x6, 0x18, 0x18, 0x60,
    0x61, 0x8f, 0xff, 0xff, 0xff, 0x18, 0x60, 0x61,
    0x81, 0x86, 0x0,

    /* U+0024 "$" */
    0x6, 0x0, 0x60, 0x7f, 0xef, 0xfe, 0xe0, 0xe,
    0x0, 0xff, 0xe7, 0xff, 0x0, 0x70, 0x7, 0x0,
    0x7f, 0xff, 0xff, 0xe0, 0x60, 0x6, 0x0,

    /* U+0025 "%" */
    0x7f, 0x3, 0xf, 0xf8, 0x20, 0xc1, 0x86, 0xc,
    0x18, 0xc0, 0xc1, 0x98, 0xf, 0xf9, 0x80, 0x7f,
    0x30, 0x0, 0x6, 0x0, 0x0, 0x6f, 0xf0, 0xc,
    0xff, 0x1, 0x8c, 0x30, 0x30, 0xc3, 0x3, 0xc,
    0x30, 0x60, 0xc3, 0xc, 0xf, 0xf0,

    /* U+0026 "&" */
    0xff, 0xe0, 0xff, 0xe0, 0x78, 0x0, 0x3c, 0x0,
    0x1e, 0x0, 0x3f, 0x0, 0x7f, 0x1e, 0xff, 0x9c,
    0xf3, 0xfc, 0xe3, 0xf8, 0xe1, 0xf0, 0xe0, 0xf0,
    0xe1, 0xf8, 0x7f, 0xfc, 0x3f, 0x9e,

    /* U+0027 "'" */
    0xff, 0xf0,

    /* U+0028 "(" */
    0x26, 0x44, 0xc8, 0x88, 0x88, 0x88, 0x84, 0x44,
    0x63,

    /* U+0029 ")" */
    0x46, 0x22, 0x31, 0x11, 0x11, 0x11, 0x12, 0x22,
    0x4c,

    /* U+002A "*" */
    0x18, 0x18, 0x99, 0xff, 0x3c, 0x3c, 0x66, 0x66,

    /* U+002B "+" */
    0xc, 0x1, 0x80, 0x30, 0x6, 0xf, 0xfe, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80,

    /* U+002C "," */
    0xfd, 0xe8,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x0, 0x30, 0x1, 0x80, 0x18, 0x0, 0x80, 0xc,
    0x0, 0xc0, 0x6, 0x0, 0x60, 0x6, 0x0, 0x30,
    0x3, 0x0, 0x10, 0x1, 0x80, 0x18, 0x0, 0x80,
    0xc, 0x0, 0xc0, 0x0,

    /* U+0030 "0" */
    0x3f, 0xfe, 0x3f, 0xff, 0xb8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3b, 0xff, 0xf8, 0xff, 0xf8,

    /* U+0031 "1" */
    0x3d, 0xff, 0xdf, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc0,

    /* U+0032 "2" */
    0x7f, 0xf8, 0xff, 0xf8, 0x0, 0x38, 0x0, 0x70,
    0x0, 0xe0, 0x1, 0xcf, 0xff, 0xbf, 0xfc, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0x80,

    /* U+0033 "3" */
    0x7f, 0xfc, 0xff, 0xf8, 0x1, 0xe0, 0x7, 0x80,
    0x1e, 0x0, 0xf8, 0x1, 0xfe, 0x3, 0xfe, 0x0,
    0xe, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0,
    0xff, 0xff, 0xbf, 0xfe, 0x0,

    /* U+0034 "4" */
    0x0, 0x1c, 0x0, 0x78, 0x1, 0xf0, 0x7, 0xe0,
    0x1d, 0xc0, 0xf3, 0x83, 0xc7, 0xf, 0xe, 0x3c,
    0x1c, 0xf0, 0x3b, 0xff, 0xff, 0xff, 0xf0, 0x1,
    0xc0, 0x3, 0x80, 0x7, 0x0,

    /* U+0035 "5" */
    0xff, 0xfd, 0xff, 0xfb, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x3f, 0xfe, 0x7f, 0xfe, 0x0,
    0xe, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0,
    0xff, 0xff, 0xbf, 0xfe, 0x0,

    /* U+0036 "6" */
    0x3f, 0xff, 0x3f, 0xff, 0xbc, 0x0, 0x1c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0xbf, 0xf9, 0xff,
    0xfe, 0xf0, 0x7, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7f, 0x0, 0x7b, 0xff, 0xf8, 0xff, 0xf8,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x70, 0x1, 0xe0,
    0x7, 0x80, 0xe, 0x0, 0x3c, 0x0, 0xf0, 0x1,
    0xc0, 0x7, 0x80, 0x1e, 0x0, 0x38, 0x0, 0xf0,
    0x3, 0xc0, 0x7, 0x0, 0x0,

    /* U+0038 "8" */
    0x7f, 0xfe, 0xff, 0xff, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0x7f, 0xfe, 0x7f, 0xfe,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0x7f, 0xfe, 0x3f, 0xfc,

    /* U+0039 "9" */
    0x3f, 0xfc, 0x3f, 0xff, 0xbc, 0x1, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0x1e, 0xff,
    0xff, 0x3f, 0xfb, 0x80, 0x1, 0xc0, 0x0, 0xe0,
    0x0, 0x70, 0x0, 0x7b, 0xff, 0xf9, 0xff, 0xf8,

    /* U+003A ":" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003B ";" */
    0xfc, 0x0, 0x0, 0xfd, 0xe8,

    /* U+003C "<" */
    0x0, 0x60, 0x38, 0x1e, 0xf, 0x7, 0x81, 0xc0,
    0x30, 0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0,
    0x30,

    /* U+003D "=" */
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xc0,

    /* U+003E ">" */
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1,
    0xc0, 0x38, 0x1e, 0xf, 0x7, 0x83, 0xc0, 0x60,
    0x0,

    /* U+003F "?" */
    0xff, 0xe7, 0xff, 0x80, 0xe, 0x0, 0x70, 0x3,
    0x80, 0x1c, 0x1f, 0xc3, 0xfc, 0x1c, 0x0, 0xe0,
    0x7, 0x0, 0x0, 0x0, 0x0, 0xe, 0x0, 0x70,
    0x0,

    /* U+0040 "@" */
    0x3f, 0xf1, 0xff, 0xec, 0x0, 0xf0, 0x3, 0xc7,
    0xff, 0x30, 0x3c, 0xc0, 0xf3, 0x3, 0xcc, 0xf,
    0x3f, 0xfc, 0x7f, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0x7, 0xff, 0xcf, 0xff,

    /* U+0041 "A" */
    0x0, 0xf0, 0x0, 0xf, 0x0, 0x1, 0xf8, 0x0,
    0x1d, 0xc0, 0x3, 0x9c, 0x0, 0x78, 0xe0, 0x7,
    0xe, 0x0, 0xe0, 0x70, 0xe, 0x7, 0x1, 0xff,
    0xf8, 0x1f, 0xff, 0x83, 0x80, 0x1c, 0x38, 0x1,
    0xe7, 0x0, 0xe, 0x70, 0x0, 0xf0,

    /* U+0042 "B" */
    0xff, 0xfe, 0x7f, 0xff, 0xb8, 0x1, 0xdc, 0x0,
    0xee, 0x0, 0x77, 0x0, 0x3b, 0xff, 0xf9, 0xff,
    0xfe, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0xff, 0xfb, 0xff, 0xf8,

    /* U+0043 "C" */
    0x3f, 0xff, 0x3f, 0xff, 0xf8, 0x0, 0xdc, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x80, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x0, 0x38, 0x0, 0x1c,
    0x0, 0xe, 0x0, 0x33, 0xff, 0xfc, 0xff, 0xfc,

    /* U+0044 "D" */
    0xff, 0xfe, 0x7f, 0xff, 0xb8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0xff, 0xfb, 0xff, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x3f, 0xff, 0x7f, 0xfe, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0x80,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x38, 0x0, 0xe0,
    0x3, 0x80, 0xe, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0x80, 0xe, 0x0, 0x38, 0x0, 0xe0, 0x3, 0x80,
    0xe, 0x0, 0x0,

    /* U+0047 "G" */
    0x3f, 0xfe, 0x3f, 0xff, 0xb8, 0x0, 0x9c, 0x0,
    0xe, 0x0, 0x7, 0x0, 0x3, 0x83, 0xff, 0xc1,
    0xff, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x7b, 0xff, 0xfc, 0xff, 0xfe,

    /* U+0048 "H" */
    0xe0, 0xf, 0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x7e,
    0x0, 0xfc, 0x1, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0xf, 0xc0, 0x1f, 0x80, 0x3f, 0x0, 0x7e, 0x0,
    0xfc, 0x1, 0xf8, 0x3, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+004A "J" */
    0x0, 0x38, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1,
    0xc0, 0xe, 0x0, 0x70, 0x3, 0xff, 0xfb, 0xff,
    0x80,

    /* U+004B "K" */
    0xe0, 0x7, 0xb8, 0x3, 0xce, 0x1, 0xe3, 0x80,
    0xf0, 0xe0, 0x78, 0x38, 0x7c, 0xe, 0x3c, 0x3,
    0x9f, 0x0, 0xef, 0xe0, 0x3f, 0xbc, 0xf, 0xc7,
    0x83, 0xe0, 0xf0, 0xf0, 0x1e, 0x38, 0x3, 0xce,
    0x0, 0x78,

    /* U+004C "L" */
    0xe0, 0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x38, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0x80,

    /* U+004D "M" */
    0xf0, 0x3, 0xfc, 0x0, 0xff, 0x80, 0x7f, 0xe0,
    0x1f, 0xfc, 0xf, 0xff, 0x3, 0xfe, 0xe0, 0xdf,
    0xb8, 0x77, 0xe6, 0x19, 0xf9, 0xce, 0x7e, 0x33,
    0x1f, 0x8f, 0xc7, 0xe3, 0xf1, 0xf8, 0x78, 0x7e,
    0x1e, 0x1c,

    /* U+004E "N" */
    0xf0, 0x7, 0xf8, 0x7, 0xfc, 0x7, 0xfc, 0x7,
    0xfe, 0x7, 0xef, 0x7, 0xe7, 0x87, 0xe3, 0xc7,
    0xe1, 0xe7, 0xe0, 0xf7, 0xe0, 0x7f, 0xe0, 0x3f,
    0xe0, 0x1f, 0xe0, 0xf, 0xe0, 0xf,

    /* U+004F "O" */
    0x3f, 0xfe, 0x3f, 0xff, 0xb8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3b, 0xff, 0xf8, 0xff, 0xf8,

    /* U+0050 "P" */
    0xff, 0xfc, 0xff, 0xfe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xff, 0xfe, 0xff, 0xfc, 0xe0, 0x0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0xe0, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xfe, 0x3f, 0xff, 0xb8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3b, 0xff, 0xf8, 0xff, 0xf8,
    0x0, 0x70, 0x0, 0x1c, 0x0, 0x6, 0x0,

    /* U+0052 "R" */
    0xff, 0xfe, 0x7f, 0xff, 0xb8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xff, 0xff, 0x7f, 0xff, 0x38, 0x3c, 0x1c,
    0xf, 0x8e, 0x1, 0xe7, 0x0, 0x7b, 0x80, 0x1e,

    /* U+0053 "S" */
    0x3f, 0xfe, 0x7f, 0xfe, 0xe0, 0x0, 0xe0, 0x0,
    0xe0, 0x0, 0xe0, 0x0, 0x7f, 0xfc, 0x3f, 0xfe,
    0x0, 0x7, 0x0, 0x7, 0x0, 0x7, 0x0, 0x7,
    0x0, 0xf, 0xff, 0xfe, 0xff, 0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xf0, 0x70, 0x1, 0xc0, 0x7,
    0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0, 0x1c,
    0x0, 0x70, 0x0,

    /* U+0055 "U" */
    0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc, 0x0,
    0x7e, 0x0, 0x3f, 0x0, 0x1f, 0x80, 0xf, 0xc0,
    0x7, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfc,
    0x0, 0x7e, 0x0, 0x3b, 0xff, 0xf8, 0xff, 0xf8,

    /* U+0056 "V" */
    0x70, 0x0, 0xf7, 0x80, 0xe, 0x38, 0x1, 0xe3,
    0xc0, 0x3c, 0x1c, 0x3, 0x81, 0xe0, 0x78, 0xe,
    0x7, 0x0, 0xf0, 0xf0, 0x7, 0xe, 0x0, 0x79,
    0xe0, 0x3, 0x9c, 0x0, 0x1f, 0xc0, 0x1, 0xf8,
    0x0, 0xf, 0x0, 0x0, 0xf0, 0x0,

    /* U+0057 "W" */
    0xf0, 0x1e, 0x1, 0xdc, 0x7, 0x80, 0xf7, 0x1,
    0xf0, 0x38, 0xe0, 0xfc, 0x1e, 0x38, 0x3f, 0x7,
    0xe, 0xe, 0xe1, 0xc1, 0xc7, 0x38, 0xf0, 0x71,
    0xce, 0x38, 0x1c, 0x61, 0xce, 0x3, 0xb8, 0x77,
    0x80, 0xee, 0xd, 0xc0, 0x1f, 0x3, 0xf0, 0x7,
    0xc0, 0xf8, 0x1, 0xf0, 0x1e, 0x0, 0x38, 0x7,
    0x80,

    /* U+0058 "X" */
    0x78, 0x1, 0xe3, 0xc0, 0x3c, 0x1e, 0x7, 0x80,
    0xf0, 0xf0, 0x7, 0x9e, 0x0, 0x3f, 0xc0, 0x1,
    0xf8, 0x0, 0xf, 0x0, 0x1, 0xf8, 0x0, 0x3f,
    0xc0, 0x7, 0x9e, 0x0, 0xf0, 0xf0, 0x1e, 0x7,
    0x83, 0xc0, 0x3c, 0x78, 0x1, 0xe0,

    /* U+0059 "Y" */
    0xf0, 0x7, 0xb8, 0x3, 0x8e, 0x3, 0x87, 0x83,
    0xc1, 0xe3, 0xc0, 0x71, 0xc0, 0x1d, 0xc0, 0x7,
    0xe0, 0x3, 0xe0, 0x0, 0xe0, 0x0, 0x70, 0x0,
    0x38, 0x0, 0x1c, 0x0, 0xe, 0x0, 0x7, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xfc, 0x0, 0xf0, 0x3, 0xc0,
    0xf, 0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0xf,
    0x80, 0x3e, 0x0, 0xf8, 0x3, 0xe0, 0x7, 0x80,
    0x1f, 0xff, 0xff, 0xff, 0x80,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcf,

    /* U+005C "\\" */
    0xc0, 0x3, 0x0, 0xc, 0x0, 0x60, 0x1, 0x80,
    0x4, 0x0, 0x30, 0x0, 0xc0, 0x6, 0x0, 0x18,
    0x0, 0x60, 0x3, 0x0, 0xc, 0x0, 0x20, 0x1,
    0x80, 0x6, 0x0, 0x10,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3f,

    /* U+005E "^" */
    0xc, 0x7, 0x1, 0xe0, 0xc8, 0x33, 0x18, 0xc6,
    0x19, 0x6,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0x81, 0xe0, 0xf8, 0x30,

    /* U+0061 "a" */
    0x7f, 0xe3, 0xff, 0x80, 0xe, 0x0, 0x70, 0x3,
    0xbf, 0xff, 0xff, 0xfc, 0x7, 0xe0, 0x3f, 0x3,
    0xff, 0xfe, 0xff, 0x90,

    /* U+0062 "b" */
    0x20, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x77, 0xf3, 0xff, 0xdc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0xc0,
    0xff, 0xfe, 0x9f, 0xe0,

    /* U+0063 "c" */
    0x3f, 0xf3, 0xff, 0xf8, 0x5, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0,
    0x9f, 0xfe, 0x7f, 0xe0,

    /* U+0064 "d" */
    0x0, 0x8, 0x1, 0xc0, 0xe, 0x0, 0x70, 0x3,
    0x9f, 0xdd, 0xff, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x81,
    0xef, 0xff, 0x3f, 0xc8,

    /* U+0065 "e" */
    0x3f, 0xe3, 0xff, 0xb8, 0xf, 0xc0, 0x7e, 0x3,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0xe0, 0x7, 0x0,
    0x1f, 0xfe, 0x7f, 0xe0,

    /* U+0066 "f" */
    0x1c, 0xf7, 0x9c, 0x73, 0xff, 0xdc, 0x71, 0xc7,
    0x1c, 0x71, 0xc7, 0x1c, 0x70,

    /* U+0067 "g" */
    0x3f, 0xbb, 0xff, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0x7f, 0xf9, 0xfd,
    0xc0, 0xe, 0x0, 0x70, 0x7, 0x87, 0xf8, 0x3f,
    0x0,

    /* U+0068 "h" */
    0x20, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x77, 0xf3, 0xff, 0xdc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7, 0xe0, 0x38,

    /* U+0069 "i" */
    0xfc, 0x1, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+006A "j" */
    0xe, 0x1c, 0x0, 0x0, 0x1, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xc3, 0x87, 0xe, 0x3f,
    0xf7, 0xc0,

    /* U+006B "k" */
    0x20, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3f, 0x83, 0xdc, 0x3c, 0xe3, 0xc7, 0x3c,
    0x3b, 0xc1, 0xfe, 0xf, 0xf8, 0x7d, 0xe3, 0x87,
    0x9c, 0x1e, 0xe0, 0x78,

    /* U+006C "l" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+006D "m" */
    0xef, 0xcf, 0x9f, 0xff, 0xfb, 0x83, 0x83, 0xf0,
    0x70, 0x7e, 0xe, 0xf, 0xc1, 0xc1, 0xf8, 0x38,
    0x3f, 0x7, 0x7, 0xe0, 0xe0, 0xfc, 0x1c, 0x1f,
    0x83, 0x83, 0xf0, 0x70, 0x70,

    /* U+006E "n" */
    0xef, 0xe7, 0xff, 0xb8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x70,

    /* U+006F "o" */
    0x3f, 0xe3, 0xff, 0xb8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xdf, 0xfc, 0x7f, 0xc0,

    /* U+0070 "p" */
    0xef, 0xe7, 0xff, 0xb8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xff, 0xfd, 0xdf, 0xce, 0x0, 0x70, 0x3, 0x80,
    0x0,

    /* U+0071 "q" */
    0x3f, 0xbb, 0xff, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xdf, 0xfe, 0x7f, 0x70, 0x3, 0x80, 0x1c, 0x0,
    0xe0,

    /* U+0072 "r" */
    0xef, 0xfe, 0xf0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0073 "s" */
    0x7f, 0xff, 0xff, 0xb8, 0x1, 0xc0, 0xe, 0x0,
    0x7f, 0xf9, 0xff, 0xe0, 0x7, 0x0, 0x38, 0x1,
    0xff, 0xff, 0xff, 0xe0,

    /* U+0074 "t" */
    0x10, 0xe1, 0xc3, 0x8f, 0xdf, 0x9c, 0x38, 0x70,
    0xe1, 0xc3, 0x87, 0xf, 0xf, 0x8f,

    /* U+0075 "u" */
    0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e,
    0x7, 0xe0, 0x7e, 0x7, 0xe0, 0x7e, 0x7, 0x7f,
    0xf3, 0xf9,

    /* U+0076 "v" */
    0xf0, 0x1e, 0xe0, 0x39, 0xe0, 0x71, 0xc1, 0xc3,
    0x83, 0x83, 0x8e, 0x7, 0x1c, 0x7, 0x70, 0xe,
    0xe0, 0xf, 0x80, 0x1f, 0x0, 0x1c, 0x0,

    /* U+0077 "w" */
    0xf0, 0x70, 0x73, 0x87, 0x83, 0x9c, 0x3e, 0x1c,
    0xf1, 0xb1, 0xc3, 0x8d, 0x8e, 0x1c, 0xee, 0x70,
    0xe6, 0x73, 0x3, 0xb1, 0xb8, 0x1f, 0x8f, 0xc0,
    0xfc, 0x7c, 0x3, 0xc1, 0xe0, 0x1e, 0xf, 0x0,

    /* U+0078 "x" */
    0x70, 0x1e, 0x38, 0x3c, 0x1c, 0x38, 0xe, 0x70,
    0x7, 0xe0, 0x3, 0xc0, 0x3, 0xc0, 0x7, 0xe0,
    0xe, 0x70, 0x1c, 0x38, 0x38, 0x1c, 0x70, 0xe,

    /* U+0079 "y" */
    0xf0, 0x1c, 0xe0, 0x39, 0xe0, 0xe1, 0xc1, 0xc3,
    0xc3, 0x3, 0x8e, 0x7, 0x18, 0x7, 0x70, 0xe,
    0xc0, 0xf, 0x80, 0x1e, 0x0, 0x1c, 0x0, 0x30,
    0x7, 0xe0, 0x1f, 0x0, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0xfc, 0x7, 0x1, 0xe0, 0x78, 0x1e,
    0x7, 0x81, 0xe0, 0x78, 0x1f, 0x3, 0xff, 0xff,
    0xf0,

    /* U+007B "{" */
    0x1c, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xe0, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe1, 0x8c, 0x63, 0x18, 0xc6, 0x19, 0x8c, 0x63,
    0x18, 0xc6, 0x37, 0x0,

    /* U+007E "~" */
    0x78, 0x61, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 109, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 98, .box_w = 3, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 141, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 13, .adv_w = 247, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 233, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 365, .box_w = 20, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 278, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 70, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 133, .adv_w = 115, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 142, .adv_w = 115, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 151, .adv_w = 175, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 159, .adv_w = 210, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 173, .adv_w = 88, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 175, .adv_w = 114, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 177, .adv_w = 85, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 187, .box_w = 13, .box_h = 17, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 206, .adv_w = 308, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 122, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 279, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 269, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 257, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 277, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 301, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 259, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 297, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 303, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 93, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 94, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 498, .adv_w = 210, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 515, .adv_w = 210, .box_w = 11, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 524, .adv_w = 210, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 541, .adv_w = 222, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 269, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 594, .adv_w = 323, .box_w = 20, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 304, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 306, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 321, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 270, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 757, .adv_w = 262, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 307, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 281, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 92, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 239, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 309, .box_w = 18, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 258, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 939, .adv_w = 326, .box_w = 18, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 304, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 321, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 288, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 321, .box_w = 17, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1104, .adv_w = 303, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 285, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 240, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1193, .adv_w = 306, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 323, .box_w = 20, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1263, .adv_w = 422, .box_w = 26, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 321, .box_w = 20, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1350, .adv_w = 285, .box_w = 17, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 277, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1411, .adv_w = 112, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1420, .adv_w = 188, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1448, .adv_w = 111, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1457, .adv_w = 189, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1467, .adv_w = 224, .box_w = 14, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1469, .adv_w = 153, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 1473, .adv_w = 243, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1493, .adv_w = 245, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1521, .adv_w = 237, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 245, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1569, .adv_w = 250, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1589, .adv_w = 113, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 248, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1627, .adv_w = 247, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1655, .adv_w = 92, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1662, .adv_w = 134, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1680, .adv_w = 239, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 89, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1715, .adv_w = 348, .box_w = 19, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1744, .adv_w = 247, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 251, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1784, .adv_w = 251, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1809, .adv_w = 250, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1834, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1846, .adv_w = 234, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1866, .adv_w = 132, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1880, .adv_w = 241, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1898, .adv_w = 241, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1921, .adv_w = 334, .box_w = 21, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1953, .adv_w = 259, .box_w = 16, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1977, .adv_w = 237, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2006, .adv_w = 214, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2023, .adv_w = 116, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2037, .adv_w = 95, .box_w = 2, .box_h = 18, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2042, .adv_w = 116, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2054, .adv_w = 209, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = 7}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 0, 0, 0, 4, 5, 4,
    6, 7, 0, 0, 0, 0, 0, 7,
    8, 7, 7, 0, 0, 0, 0, 0,
    0, 0, 9, 7, 7, 7, 10, 11,
    12, 0, 0, 13, 14, 15, 0, 0,
    7, 16, 7, 17, 18, 19, 20, 21,
    21, 22, 23, 0, 0, 0, 0, 0,
    0, 0, 24, 25, 25, 0, 25, 26,
    0, 27, 0, 0, 28, 0, 29, 29,
    25, 30, 0, 31, 32, 0, 0, 33,
    33, 34, 33, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 4, 3,
    5, 6, 7, 0, 0, 8, 0, 6,
    9, 6, 6, 0, 0, 0, 0, 0,
    10, 0, 11, 0, 6, 0, 0, 0,
    6, 0, 0, 12, 0, 0, 0, 0,
    6, 0, 6, 0, 13, 14, 15, 16,
    16, 17, 18, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 20, 21, 20, 22,
    23, 0, 0, 24, 0, 0, 25, 25,
    20, 26, 23, 27, 28, 29, 30, 31,
    31, 32, 31, 33, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -48, -41, 0, 0, 0,
    0, 0, 0, -7, -7, -7, 0, -7,
    -26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -37,
    0, -18, 0, -37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -43, 0, -18, 0, 0, 0, 0,
    -28, 0, -34, 0, -50, 0, 0, 0,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, -26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -27, 0, -33, -34, -41, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, 0, 0, 0, -67,
    -59, 0, 0, 0, 0, 0, 0, -38,
    -38, -38, 0, -38, -15, -12, -13, -13,
    -23, 0, 0, 0, -8, -7, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    -14, 0, 0, 0, 0, -14, -14, -16,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -54, 0, 0, 0, 0, -49, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -48, -11, 0, 0, 0, -14, 0, 0,
    0, -14, 0, 2, 0, -43, -14, -68,
    0, -58, -14, -14, -14, 0, -23, 0,
    0, 0, 0, 0, 0, -13, -37, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -41, 0, -32, 0,
    0, 0, 0, 0, -31, -63, 0, 7,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, -28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, -17, 0, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -32, 0, -16, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 5, 0, 6, -14,
    -14, -14, 0, -14, 0, 0, 0, 0,
    0, 0, -14, -15, 0, 0, -41, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    7, 0, 0, -43, 0, -56, 0, -57,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, -42, 0, -48, 0, 0, 0, 0,
    0, -30, -13, 0, 0, 0, -10, 0,
    -8, -1, 0, 0, 0, 0, -27, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, -12, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, -28, -27, -37, 0,
    0, 0, 0, 0, -43, -50, 0, 11,
    0, 7, 0, 7, -24, -16, -16, 0,
    -16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -18,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -34, -33,
    -54, -14, 0, 0, 0, 0, -68, -56,
    -12, 7, 0, 10, 0, 7, -33, -31,
    -31, 0, -31, 0, 0, 0, 0, -24,
    0, 0, 0, 0, 0, 0, 0, 0,
    -34, 0, -14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    -20, -20, 0, -20, 0, 0, 0, 0,
    0, 0, 0, -23, 0, 0, 0, 0,
    -50, -41, -69, -16, 0, 0, 0, 0,
    -63, -63, -10, 7, 0, 7, 0, 0,
    -50, -50, -50, 0, -50, 0, 0, -18,
    0, -39, 0, -26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -30, 0,
    -43, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    -7, 0, 0, 0, -13, 0, 0, 0,
    0, 0, -14, 0, 0, 0, 0, -31,
    -13, -47, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, -14, -14,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 7, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -40, 0, -38, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, -14, -14,
    0, -14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -30, 0, -39, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    -33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, -31, 0, -30, 0, 0, 0,
    0, 0, -39, 0, 0, 0, 0, 0,
    0, 0, -14, -14, -14, 0, -14, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, -14, -14, 0, -14,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 34,
    .right_class_cnt     = 33,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_SuiGen22 = {
#else
lv_font_t ui_font_SuiGen22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SUIGEN22*/
