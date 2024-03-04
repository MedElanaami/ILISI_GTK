#include "../lib/box.h"

/// Initialisation du box
box_object* initialiser_Box(GtkWidget* conteneur,gint homogene,gint espace,gchar type) {
    box_object* box = (box_object*)malloc(sizeof(box_object));
    box->conteneur = conteneur;
    box->type=type;
    box->homogene=homogene;
    box->espace=espace;
    gtk_container_add(GTK_CONTAINER(box->conteneur), box->box);
    return box;
}

/// Création du box
void creation_Box(box_object*box) {
    if(box->type=="H")
        box= gtk_box_new(GTK_ORIENTATION_HORIZONTAL, box->espace);// créer un box horizontal.
    else
        box= gtk_box_new(GTK_ORIENTATION_VERTICAL, box->espace);//créer un box verticale
}
