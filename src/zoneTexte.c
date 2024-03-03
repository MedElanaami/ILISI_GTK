
#include "../lib/global.h"
/// Initialisation de la zone de texte
zone_texte* initialiser_zone_texte(GtkWidget* conteneur) {
    zone_texte* texte = (zone_texte*)malloc(sizeof(zone_texte));
    texte->conteneur = conteneur;
    texte->max_car = 0;
    texte->texte = g_strdup(""); // Initialisation à une chaîne vide
    return texte;
}

/// Création de la zone de texte
void creation_zone_texte(zone_texte* zt) {
    zt->zone = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(zt->conteneur), zt->zone);
}
