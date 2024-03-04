#include "../lib/box.h"

/// Initialisation du box
boxObject * initialiser_Box(GtkWidget* conteneur,gint homogene,gint espace,gchar type) {
    boxObject *box;
    box = (boxObject *) malloc(sizeof(boxObject));
    box->conteneur = conteneur;
    box->type=type;
    box->homogene=homogene;
    box->espace=espace;
    gtk_container_add(GTK_CONTAINER(box->conteneur), box->box);
    return box;
}

/// Création du box
void creation_Box(boxObject *box) {
    if(box->type=="H")
        box= gtk_box_new(GTK_ORIENTATION_HORIZONTAL, box->espace);// créer un box horizontal.
    else
        box= gtk_box_new(GTK_ORIENTATION_VERTICAL, box->espace);//créer un box verticale
}
