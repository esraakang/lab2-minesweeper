#include "view.h"
#include "model.h"
#include <stdio.h>

void print_grid() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == -1) {
                printf(" M "); // Mayın
            } else {
                printf(" %d ", grid[i][j]);
            }
        }
        printf("\n");
    }
}
