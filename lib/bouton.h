#ifndef ILISI_GTK_BOUTON_H
#define ILISI_GTK_BOUTON_H
#include "global.h"
// structure d'un bouton simple
typedef struct
{
    GtkWidget *button;  // The button widget
    char *id; // The id of the button
    char *nom_action; // A boolean to indicate if the label has a mnemonic (activated with ALT + associated letter)
    char *label; // The label of the button
    int on_focus; // A boolean to indicate if the button is focused
    char position; // lEFT or RIGHT or TOP or BOTTOM
    int is_img; // A boolean to indicate if the button has an image
    GtkWidget *parent; // Reference to the parent container or window of the button in the GTK user interface
} Bouton;

//Structure d'un bouton radio
typedef struct Bouton_radio
{
    GtkWidget *bouton_radio;
    char *id;
    char *nom_action;
    char *label;
    char position; // lEFT or RIGHT or TOP or BOTTOM
    int is_active; // A boolean to indicate if the button is active
    int is_focus; // A boolean to indicate if the button is focused
    int is_img; // A boolean to indicate if the button has an image
}Bouton_radio;

//Structure d'un bouton de type check
typedef struct Bouton_check
{
    GtkWidget *bouton_check;
    char *id;
    char *label;
    char *nom_action;
    char position; // lEFT or RIGHT or TOP or BOTTOM
    int is_active; // A boolean to indicate if the button is active
    int is_focus; // A boolean to indicate if the button is focused
    int is_img; // A boolean to indicate if the button has an image
}Bouton_check;


#endif //ILISI_GTK_BOUTON_H
