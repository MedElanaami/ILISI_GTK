
#include "../lib/fenetre.h"


// Function to create a new Fenetre
// Function to create a new Fenetre with default values
Fenetre* fenetre_new(gchar *id,int type) {
    Fenetre *fenetre = g_malloc(sizeof(Fenetre));
    fenetre->type = type;
    if(fenetre->type == TRUE)
        fenetre->window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    else
        fenetre->window = gtk_window_new(GTK_WINDOW_POPUP);
    fenetre->titre = "Default Title";
    fenetre->icon = NULL;
    fenetre->size.largeur = 200;
    fenetre->size.hauteur = 200;
    fenetre->position.x = 0;
    fenetre->position.y = 0;
    fenetre->id = id;
    fenetre->resizable = TRUE;
    fenetre->children = NULL;
    return fenetre;
}

// Function to set the title of a Fenetre
void fenetre_set_title(Fenetre *fenetre, gchar *titre) {
    fenetre->titre = titre;
    gtk_window_set_title(GTK_WINDOW(fenetre->window), titre);
}

// Function to set the icon of a Fenetre
void fenetre_set_icon(Fenetre *fenetre, gchar *icon) {
    GError *error = NULL;

    fenetre->icon = icon;
    if (!gtk_window_set_icon_from_file(GTK_WINDOW(fenetre->window), icon, &error)) {
        g_printerr("Error loading icon: %s\n", error->message);
        g_error_free(error);
    }
}

// Function to set the size of a Fenetre
void fenetre_set_size(Fenetre *fenetre, Taille size) {
    fenetre->size = size;
    gtk_window_set_default_size(GTK_WINDOW(fenetre->window), size.largeur, size.hauteur);
}

// Function to set the position of a Fenetre
void fenetre_set_position(Fenetre *fenetre, Position position) {
    fenetre->position = position;
    gtk_window_move(GTK_WINDOW(fenetre->window), position.x, position.y);
}

// Function to set the resizable property of a Fenetre
void fenetre_set_resizable(Fenetre *fenetre, gboolean resizable) {
    fenetre->resizable = resizable;
    gtk_window_set_resizable(GTK_WINDOW(fenetre->window), resizable);
}

// Function to add a child widget to a Fenetre
void fenetre_add_child(Fenetre *fenetre, GtkWidget *child) {
    fenetre->children = g_list_append(fenetre->children, child);
    gtk_container_add(GTK_CONTAINER(fenetre->window), child);
}

// Function to remove a child widget from a Fenetre
void fenetre_remove_child(Fenetre *fenetre, GtkWidget *child) {
    fenetre->children = g_list_remove(fenetre->children, child);
    gtk_container_remove(GTK_CONTAINER(fenetre->window), child);
}