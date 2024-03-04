//
// Created by med on 3/4/24.
//

#ifndef ILISI_GTK_ZONETEXTE_H
#define ILISI_GTK_ZONETEXTE_H
#include "global.h"

// Structure pour la zone de texte
typedef struct {
    GtkWidget* zone;
    GtkWidget* conteneur;
    gint max_car;
    gchar* texte;
} zone_texte;

//prototype de la fonction
zone_texte* initialiser_zone_texte(GtkWidget* conteneur);
void creation_zone_texte(zone_texte* zt);
#endif //ILISI_GTK_ZONETEXTE_H
