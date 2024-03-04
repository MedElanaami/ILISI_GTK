#include "../lib/zoneMotPasse.h"

/// Initialisation de la zone de mot de passe
password_object* initialiser_password(GtkWidget* conteneur,gint max,gint visible,gchar car_vis) {
    password_object* passe = (password_object*)malloc(sizeof(password_object));
    passe->conteneur = conteneur;
    passe->max_car=max;
    passe->visible=visible;
    passe->car_vis=car_vis;
    gtk_container_add(GTK_CONTAINER(passe->conteneur), passe->mot_pass);
    return passe;
}

/// Création de la zone de mot de passe
void creation_password(password_object*passe) {
    passe->mot_pass= gtk_entry_new();
    if(passe->max_car>0)
        gtk_entry_set_max_length(passe->mot_pass,passe->max_car);
    if(passe->visible==1)
        gtk_entry_set_visibility(passe->mot_pass,1);
    else
    { gtk_entry_set_visibility(passe->mot_pass,0);
        gtk_entry_set_invisible_char(passe->mot_pass, passe->car_vis);
    }
}