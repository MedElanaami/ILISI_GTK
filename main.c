#include <gtk/gtk.h>
#include "src/Macros/structure.h" // Include the header file for Fenetre structure and its functions

int main(int argc, char *argv[]) {
    Fenetre *fenetre;

    gtk_init(&argc, &argv);

    // Create a new Fenetre
    fenetre = fenetre_new("1", TRUE);

    // Set the Fenetre title
    fenetre_set_title(fenetre, "Fenetre Window");

    // Set the Fenetre size
    Taille size = {200, 200};
    fenetre_set_size(fenetre, size);

    // Show the Fenetre
    gtk_widget_show(fenetre->window);

    // Connect the "destroy" event to the gtk_main_quit function
    // This will cause the application to exit when the window is closed
    g_signal_connect(fenetre->window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Start the GTK main event loop
    gtk_main();

    return 0;
}