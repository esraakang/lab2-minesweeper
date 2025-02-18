#include <gtk/gtk.h>
#include "model.h"
#include "view.h"

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window = create_main_window(app);
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    generate_random_mfield(20); // %20 mayın oranıyla oyun başlat

    GtkApplication *app = gtk_application_new("org.example.minefield", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    return g_application_run(G_APPLICATION(app), argc, argv);
}
