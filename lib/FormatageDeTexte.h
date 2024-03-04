//
// Created by med on 3/4/24.
//

#ifndef ILISI_GTK_FORMATAGEDETEXTE_H
#define ILISI_GTK_FORMATAGEDETEXTE_H
#include "global.h"
//structure de formatage de texte
typedef struct FT
{
    char texte[200];
    int alignement;
    /*-0:GTK_JUSTIFY_LEFT :alignement de texte à gauche
     -1: GTK_JUSTIFY_RIGHT : // // à droite
     -2: GTK_JUSTIFY_CENTER : centrer le texte
     -3 : GTK_JUSTIFY_FILL :Le texte est étendu pour remplir toute la largeur disponible*/
    char *police;
    char *text_taille;
    char *style;
    char *dimension;
    char *text_color;
    char *backgraound_color;
    char *souligne_text;
    char *barer_text;
}formatage_texte;
#endif //ILISI_GTK_FORMATAGEDETEXTE_H
