
#ifndef ILISI_GTK_MENUS_H
#define ILISI_GTK_MENUS_H

#include "global.h"
#include "box.h"

// Menus
typedef struct
{
    GtkWidget *menu;  // The menu widget
} Menu;

Menu* menu_new() {
    Menu *newMenu = (Menu*)malloc(sizeof(Menu));
    newMenu->menu = gtk_menu_new();
    return newMenu;
}


#endif //ILISI_GTK_MENUS_H
