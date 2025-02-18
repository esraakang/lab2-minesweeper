#include "model.h"
#include <stdlib.h>
#include <time.h>

int grid[SIZE][SIZE] = {0};
int mfield[SIZE][SIZE] = {0};

// Rastgele mayın oluşturma
void generate_random_mfield(int mine_percentage) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            mfield[i][j] = (rand() % 100 < mine_percentage) ? 1 : 0;
        }
    }
    init_grid();
}

// Çevresindeki mayınları sayma
int num_of_surrounding_mines(int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int r = row + i, c = col + j;
            if (r >= 0 && r < SIZE && c >= 0 && c < SIZE) {
                count += mfield[r][c];
            }
        }
    }
    return count;
}

// Grid'i başlatma
void init_grid() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = (mfield[i][j] == 1) ? -1 : num_of_surrounding_mines(i, j);
        }
    }
}#include "model.h"
#include <stdlib.h>
#include <time.h>

int grid[SIZE][SIZE] = {0};
int mfield[SIZE][SIZE] = {0};

// Rastgele mayın oluşturma
void generate_random_mfield(int mine_percentage) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            mfield[i][j] = (rand() % 100 < mine_percentage) ? 1 : 0;
        }
    }
    init_grid();
}

// Çevresindeki mayınları sayma
int num_of_surrounding_mines(int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int r = row + i, c = col + j;
            if (r >= 0 && r < SIZE && c >= 0 && c < SIZE) {
                count += mfield[r][c];
            }
        }
    }
    return count;
}

// Grid'i başlatma
void init_grid() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = (mfield[i][j] == 1) ? -1 : num_of_surrounding_mines(i, j);
        }
    }
}
