#include <stdio.h>


int main (void)
{
    int fair_game_table [2][2];

    int i, j;
    int count = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            fair_game_table [i][j] = count ++;
        }
    }
    
    printf("== %d번 라운드의 카드입니다 ==\n\n", (i-1));
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", fair_game_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}