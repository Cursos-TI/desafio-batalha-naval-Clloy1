#include <stdio.h>


int main() {
    int tabuleiro[10][10] = {{0}};
    int cone[5][5] = {{0, 0, 1, 0, 0},
                      {0, 1, 1, 1, 0},
                      {1, 1, 1, 1, 1},
                      {0, 1, 1, 1, 0},
                      {0, 0, 1, 0, 0}};

    int cruz[5][5] = {{0, 0, 1, 0, 0},
                     {0, 0, 1, 0, 0},
                     {1, 1, 1, 1, 1},
                     {0, 0, 1, 0, 0},
                     {0, 0, 1, 0, 0}};

    int octaedro[5][5] = {{0, 0, 1, 0, 0},
                          {0, 1, 1, 1, 0},
                          {1, 1, 1, 1, 1},
                          {0, 1, 1, 1, 0},
                          {0, 0, 1, 0, 0}};

    // Define navios
    tabuleiro[3][3] = 3;
    tabuleiro[7][7] = 3;

    // Aplica habilidades
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                if (i < 5 && j < 5) {
                    tabuleiro[i][j] = 5;
                }
            }
            if (cruz[i][j] == 1) {
                if (i + 2 < 10 && j + 2 < 10) {
                    tabuleiro[i + 2][j + 2] = 5;
                }
            }
            if (octaedro[i][j] == 1) {
                if (i + 5 < 10 && j + 5 < 10) {
                    tabuleiro[i + 5][j + 5] = 5;
                }
            }
        }
    }

    // Exibe tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;



    
}


