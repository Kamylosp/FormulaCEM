SET(SOURCES screens/ui_Screen1.c
    ui.c
    ui_helpers.c
    images/ui_img_escudo_copy_png.c
    images/ui_img_imcard2_png.c
    fonts/ui_font_OxaBold40.c
    fonts/ui_font_SuiGen22.c
    fonts/ui_font_SuiGen24.c
    fonts/ui_font_SuiGen40.c
    fonts/ui_font_SuiGen40Ext.c
    fonts/ui_font_SuiGen55.c
    fonts/ui_font_SuiGen90.c)

add_library(ui ${SOURCES})
