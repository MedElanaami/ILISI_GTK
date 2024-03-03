
#ifndef ILISI_GTK_FENETRE_H
#define ILISI_GTK_FENETRE_H

#include <gtk/gtk.h>
#include "global.h"
//prototypes des fonctions
Fenetre* fenetre_new(char*id,int type);
void fenetre_set_title(Fenetre *fenetre,gchar *titre);
void fenetre_set_icon(Fenetre *fenetre, gchar *icon);
void fenetre_set_size(Fenetre *fenetre, Taille size);
void fenetre_set_position(Fenetre *fenetre, Position position);
void fenetre_set_resizable(Fenetre *fenetre, gboolean resizable);
void fenetre_add_child(Fenetre *fenetre, GtkWidget *child);
void fenetre_remove_child(Fenetre *fenetre, GtkWidget *child);
#endif //ILISI_GTK_FENETRE_H
