
#include "../lib/menus.h"


Menu_S *Init_Menus()
{
    Menu_S *Mon_Menu;

    Mon_Menu = (Menu_S *) malloc(sizeof(Menu_S));

    if(!Mon_Menu)
    {
        printf("\nERREUR D'ALLOCATION!");
        exit(0);
    }

    return (Menu_S*) Mon_Menu;
}


Itms_Menu *Initi_Itms_Menus(char titre [25], GtkWidget *parent)
{
    Itms_Menu *Mon_Menu_Itms;

    Mon_Menu_Itms = (Itms_Menu *)malloc(sizeof(Itms_Menu));

    if(!Mon_Menu_Itms)
    {
        printf("\nERREUR D'ALLOCATION!");
        exit(1);
    }

    strcpy(Mon_Menu_Itms->Label, titre);

    Mon_Menu_Itms->Pere=parent;

    return((Itms_Menu *) Mon_Menu_Itms);
}
