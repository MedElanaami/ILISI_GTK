
#ifndef ILISI_GTK_FENETRE_H
#define ILISI_GTK_FENETRE_H
#include "global.h"
#include "Position.h"
#include "Taille.h"
// Structure for a window
typedef struct {
    GtkWidget *window; // GtkWidget is a base class for all widgets
    gchar *titre; // Title of the window
    gchar *icon; // Icon of the window
    gboolean type; // Type of the window (TRUE for toplevel, FALSE for popup)
    gboolean resizable; // Resizable property of the window
    Taille size; // Size of the window
    Position position; // Position of the window
    gchar *id; // Unique identifier for the window
    GList *children; // List of child widgets
} Fenetre;

//Structure pour header bar
typedef struct {
    GtkWidget *header_bar;
    GtkWidget *conteneur;
    gchar *titre;
    gchar *sous_titre;
    gchar *icon;
    gint spacing;
    gint nbr_items;
    gchar *id;
} HeaderBar;

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
