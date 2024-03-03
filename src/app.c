#include "../lib/global.h"

void start_app(int *argc, char ***argv) {
    Fenetre *fenetre;

    gtk_init(argc, argv);
    fenetre = fenetre_new("1", TRUE);
    fenetre_set_title(fenetre, "ILISI GTK");
    Taille size = {200, 200};
    fenetre_set_size(fenetre, size);
    fenetre_set_icon(fenetre, "../img/coding.png");
    gtk_widget_show(fenetre->window);
    g_signal_connect(fenetre->window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
}//
// Created by med on 3/3/24.
//

#include "../lib/app.h"
