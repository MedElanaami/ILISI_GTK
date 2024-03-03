#include "lib/app.h"

int main(int argc, char *argv[]) {
    start_app(&argc, &argv);
    gtk_main();
    return 0;
}