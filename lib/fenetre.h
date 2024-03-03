
#ifndef ILISI_GTK_FENETRE_H
#define ILISI_GTK_FENETRE_H

#include <gtk/gtk.h>

// Structure for window size
typedef struct {
    gint largeur;
    gint hauteur;
} Taille;

// Structure for window position
typedef struct {
    gint x;
    gint y;
} Position;

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
#endif //ILISI_GTK_FENETRE_H
