
#ifndef ILISI_GTK_STRUCTURE_H
#define ILISI_GTK_STRUCTURE_H

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

// Structure pour la zone de texte
typedef struct {
    GtkWidget* zone;
    GtkWidget* conteneur;
    gint max_car;
    gchar* texte;
} zone_texte;
#endif //ILISI_GTK_STRUCTURE_H
