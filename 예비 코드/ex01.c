#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CARD_ROWS 5
#define CARD_COLS 11

void swap(char *a, char *b) {
    char temp[CARD_COLS];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void shuffle(char Pair_game_table[][CARD_ROWS][CARD_COLS], int rows, int cols) {
    srand(time(NULL));      // 난수 생성
    int num_pairs = rows * cols / 2;
    for (int i = num_pairs * 2 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        for (int k = 0; k < CARD_ROWS; k++) {
            swap(Pair_game_table[j / cols][j % cols][k], 
                 Pair_game_table[i / cols][i % cols][k]);
        }
    }
}

void printMatrix(char Pair_game_table[][CARD_ROWS][CARD_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < CARD_ROWS; k++) {
            for (int j = 0; j < cols; j++) {
                printf("%s", Pair_game_table[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main(void) {
    int rows, cols;
    printf("Enter number of rows and columns for the game matrix: ");
    scanf("%d %d", &rows, &cols);

    int num_pairs = rows * cols / 2;

    char Pair_game_table[rows][cols][CARD_ROWS][CARD_COLS];

    // Initialize game matrix
    for (int i = 0; i < num_pairs; i++) {
        sprintf(Pair_game_table[i][0][0], "|-------|");
        sprintf(Pair_game_table[i][0][1], "|/   \\ |");
        sprintf(Pair_game_table[i][0][2], "|(0  0) |");
        sprintf(Pair_game_table[i][0][3], "|> ^ <  |");
        sprintf(Pair_game_table[i][0][4], "|-------|");

        sprintf(Pair_game_table[i][1][0], "|-------|");
        sprintf(Pair_game_table[i][1][1], " | /\\_/\\ |");
        sprintf(Pair_game_table[i][1][2], "|( o.o )|");
        sprintf(Pair_game_table[i][1][3], "| > ^ < |");
        sprintf(Pair_game_table[i][1][4], "|-------|");

        // Copy each pair of cards
        memcpy(Pair_game_table[num_pairs + i], Pair_game_table[i], sizeof(char) * CARD_ROWS * CARD_COLS * 2);
    }

    shuffle(Pair_game_table, rows, cols);

    // Print shuffled matrix
    printMatrix(Pair_game_table, rows, cols);

    return 0;
}
