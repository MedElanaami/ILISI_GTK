
#ifndef ILISI_GTK_ZONEMOTPASSE_H
#define ILISI_GTK_ZONEMOTPASSE_H
#include "global.h"
//Structure pour la zone de mot de passe
typedef struct
{ GtkWidget* mot_pass; //Le box
    GtkWidget* conteneur;//l’élément qui va contenir la zone de mot de passe
    gint max_car;// le maximum des caractères possibles à saisir
    gint visible;// visible (1) ou pas(0)
    gchar car_vis;// le caractère visible dans la zone
    gchar* password;
}password_object;


#endif //ILISI_GTK_ZONEMOTPASSE_H
