//

#ifndef ILISI_GTK_BOUTON_H
#define ILISI_GTK_BOUTON_H
#include "global.h"
// structure des boutons simple
typedef struct BT
{
    GtkWidget *btn;  //LE BOUTON
    GtkStockItem *icone; //Un pointeur vers un objet GtkStockItem. GTK utilise des icônes standard appelées "stock items" pour représenter des actions courantes
    char *label;
    int boolean; //un label avec mnémonique ou non (activer a l'aide ALT+ lettre qui associe )
    GtkWidget *parent; //pour faire référence au conteneur ou à la fenêtre parente du bouton dans l'interface utilisateur GTK.
}bouton;


//les boutons à choix unique(radio):

typedef struct liste_radio
{
    GtkWidget *btRadio;
    char nom[30];
    struct liste_radio *svt;
}bouton_radio;

//l'ensemble des boutons radio avec leur parent
typedef struct radio
{
    GtkWidget *parent;
    bouton_radio *liste;
}radio;



// les boutons à choix multiple
typedef struct BTMLTP
{
    GtkWidget *btCheck;
    char nom[30];
    GtkWidget *parent;
}bouton_Check;
#endif //ILISI_GTK_BOUTON_H
