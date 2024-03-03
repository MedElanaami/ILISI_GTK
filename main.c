#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *image;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

    // Load an icon using its name
    image = gtk_image_new_from_icon_name("document-save", GTK_ICON_SIZE_DIALOG);

    gtk_container_add(GTK_CONTAINER(window), image);

    gtk_widget_show_all(window);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_main();

    return 0;
}
