#include "controller.h"
#include "model.h"
#include "view.h"

void on_cell_clicked(GtkButton *button, gpointer data) {
    int *pos = (int *)data;
    int row = pos[0], col = pos[1];

    if (grid[row][col] == -1) {
        gtk_button_set_label(button, "X"); 
        gtk_widget_set_sensitive(grid_gui, FALSE);
    } else {
        update_button_label(button, row, col);

        // Eğer hücrenin etrafında mayın yoksa, çevresini de aç
        if (grid[row][col] == 0) {
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int r = row + i, c = col + j;
                    if (r >= 0 && r < SIZE && c >= 0 && c < SIZE) {
                        // Komşu hücreyi de aç
                        update_button_label(button, r, c);
                    }
                }
            }
        }
    }
}
