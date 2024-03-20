#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROWS 2
#define COLS 2
#define CARD_ROWS 7
#define CARD_COLS 20
#define NUM_PAIRS 2

void swap(char *a, char *b) {
    char temp[CARD_COLS];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void shuffle(char Pair_game_table[ROWS][COLS][CARD_ROWS][CARD_COLS]) {
    srand(time(NULL));      // 난수 생성
    for (int i = NUM_PAIRS * ROWS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        for (int k = 0; k < ROWS; k++) {
            for (int l = 0; l < CARD_ROWS; l++) {
                swap(Pair_game_table[j / ROWS][j % ROWS][l], 
                    Pair_game_table[i / ROWS][i % ROWS][l]);
            }
        }
    }
}
int main (void) {
    char Pair_game_table[ROWS][COLS][CARD_ROWS][CARD_COLS] = {
        {
            {
                "|---------------|",
                "|               |",
                "|     (\\_/)     |",
                "|    (>'.'<)    |",
                "|    (\")_(\")    |",
                "|               |",
                "|---------------|"               
            },
            {
                "|---------------|\0",
                "|^__^           |",
                "|(oo)\\_______   |",
                "|(__)\\       )\\ |",
                "|    ||----w |  |",
                "|    ||     ||  |",
                "|---------------|"
            }
        },
        {
           {
                "|---------------|",
                "|               |",
                "|     /\\_/\\     |",
                "|    ( o.o )    |",
                "|     > ^ <     |",
                "|               |",
                "|---------------|"             
            },
            {
                "|---------------|",
                "|    / \\___     |",
                "|   (     @\\___ |",
                "|   /         O |",
                "|  /    (_____/ |",
                "|  /_____/   U  |",
                "|---------------|"
        }
    }   
};
    shuffle(Pair_game_table);

     // 섞인 배열 출력
    for (int i = 0; i < NUM_PAIRS * ROWS; i++) {
        for (int k = 0; k < CARD_ROWS; k++) {
            for (int j = 0; j < COLS; j++) {
                printf("%s", Pair_game_table[i / ROWS][i % ROWS][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}