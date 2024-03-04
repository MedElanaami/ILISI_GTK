
#include "../lib/bouton.h"
//initialisation d'un bouton
bouton*init_bouton(GtkWidget *parent, GtkStockItem *icone,char texte[20]
        ,int boolean)
{
    bouton *bout;
    bout=(bouton*)malloc(sizeof(bouton));
    if(!bout) exit(-1);
    bout->boolean=0; //pas de mnémonique
    bout->icone=icone; //on peut mettre NULL si on a pas d'icone
    //allocation de la mémoire pour le label du bouton
    bout->label=(char*)malloc(sizeof(char)*20);
//copier le label
    strcpy(bout->label,texte);

    return((bouton*)bout);
}

//creation d'un bouton simple
void create_bouton_simple(bouton *bout)
{
    if(bout->icone)
    {
        // creer un bouton avec un label et une icone
        bout->btn=gtk_button_new_from_stock((char*)bout->icone);
    }
    else
    {
        if(!bout->boolean) //bouton avec un label et sans mnémonique
            bout->btn=gtk_button_new_with_label(bout->label);

        else //bouton avec label et un mnémonique
            bout->btn=gtk_button_new_with_mnemonic(bout->label);
    }
}



//creation d'un bouton à choix unique
//step1: ajouter les éléments radio à la fin de la liste des boutons radio

bouton_radio *ajouter_radio(bouton_radio* list,char Nom[30])
{
    bouton_radio* nvelem=(bouton_radio*)malloc(sizeof(bouton_radio));//allouer la mémoire
    nvelem->svt=NULL; //pointer svt sur NULL
    strcpy(nvelem->nom,Nom);//copier le nom du bouton radio
    if(!list) return nvelem; //si la liste est vide retourne nouvel élement
    bouton_radio *t=list;//sinon, ajouter à la fin de la liste
    while(list->svt)
        list=list->svt;
    list->svt=nvelem;

    return t; //Retourne le pointeur vers la tête de la liste mise à jour.
}

//step2: assoicer le parent aux boutons radio
radio* associer_groupe_radio( bouton_radio *liste,GtkWidget* parent)
{
    radio* buttonradio=(radio*)malloc(sizeof(radio));
    buttonradio->liste=liste;
    buttonradio->parent=parent;

    return((radio*)buttonradio);
}

//step3:fait le parcours de toute la liste créer les boutons radios ensuite ajouter à leur parent

void creation_radio_bouton(radio* rad)
{
    /*creation de premier bouton radio */
    /* if(rad->liste)
       { rad->liste->btRadio=gtk_radio_button_new_with_label(NULL,rad->liste->nom);
         ajouter_container(rad->parent,rad->liste->btRadio);
       }
       else return;
     */
    //bouton_radio *l=rad->liste->svt;
    bouton_radio *l=rad->liste;
    while(l)
    { //ajout des boutons radio de la liste
        l->btRadio=gtk_radio_button_new_with_label_from_widget
                (GTK_RADIO_BUTTON(rad->liste->btRadio),l->nom);

        //ajouter au container
        ajouter_container(rad->parent,l->btRadio);
        l=l->svt;
    }//fin while
}



//creation des boutons à choix multipe

void creation_check_bouton(bouton_Check *check)
{
    check->btCheck=gtk_check_button_new_with_label(check->nom);
    //ajouter au container
    ajouter_container(check->parent,check->btCheck);
}



