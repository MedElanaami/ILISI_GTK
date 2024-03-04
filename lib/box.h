//
// Created by med on 3/4/24.
//

#ifndef ILISI_GTK_BOX_H
#define ILISI_GTK_BOX_H


#include "global.h"

///*************************box***************************************************
///structure de box
typedef struct
{ GtkWidget* box; //Le box
    GtkWidget* conteneur;//l’élément qui va contenir le box
    gchar type; //le type du box (horizontal ou vertical)
    gint homogene; //Homogene ou pas
    gint espace;// l'espace entre les widgets du box
}boxObject;

#endif //ILISI_GTK_BOX_H
