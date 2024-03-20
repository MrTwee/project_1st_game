#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROWS 2
#define COLS 2
#define CARD_ROWS 5
#define CARD_COLS 11
#define NUM_PAIRS 2

void swap(char *a, char *b) {
    char temp[CARD_COLS];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void shuffle(char Pair_game_table[ROWS][COLS][CARD_ROWS][CARD_COLS]) {
    srand(time(NULL));      // 난수 생성
    for (int i = ROWS * COLS * CARD_ROWS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        
        // i와 j의 인덱스를 4차원 배열의 1차원 인덱스로 변환
        int row_i = i / (COLS * CARD_ROWS);
        int col_i = (i / CARD_ROWS) % COLS;
        int row_j = j / (COLS * CARD_ROWS);
        int col_j = (j / CARD_ROWS) % COLS;
        
        for (int k = 0; k < CARD_ROWS; k++) {
            swap(Pair_game_table[row_j][col_j][k], Pair_game_table[row_i][col_i][k]);
        }
    }
}


int main(void) {
    char Pair_game_table[ROWS][COLS][CARD_ROWS][CARD_COLS] = {
        {
            {
                "|-------|",  // 개
                "|/   \\ |",
                "|(0  0) |",
                "|> ^ <  |",
                "|-------|"
            },
            {
                "|-------|",  // 고양이
                " | /\\_/\\ |",
                "|( o.o )|",
                "| > ^ < |",
                "|-------|"
            }
        },
        {
            {
                "|-------|",  // 개
                "|/   \\ |",
                "|(0  0) |",
                "|> ^ <  |",
                "|-------|"
            },
            {
                "|-------|",  // 고양이
                " | /\\_/\\ |",
                "|( o.o )|",
                "| > ^ < |",
                "|-------|"
            }
        }
    };

    shuffle(Pair_game_table);

    // 섞인 배열 출력
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < CARD_ROWS; k++) {
                printf("%s", Pair_game_table[i][j][k]);
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
