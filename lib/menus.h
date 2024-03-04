
#ifndef ILISI_GTK_MENUS_H
#define ILISI_GTK_MENUS_H

#include "global.h"
// Menus

typedef struct
{
    GtkWidget *Menu; // L'element
    char *Libelle ;
}Menu_S;

// Bare De Menu_

typedef struct
{
    boxObject *Boite;
    GtkWidget *Menu_;
}Menu_Bar;

// Itms Menu_

typedef struct
{
    char *Label;
    GtkWidget *Pere;
    GtkWidget *Itms;
}Itms_Menu;

// List Deroulante

typedef struct
{
    char *Label;
    GtkWidget *Pere;
}Liste;

#endif //ILISI_GTK_MENUS_H
