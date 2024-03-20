#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_ROWS 4
#define MAX_COLS 4
#define CARD_ROWS 7
#define CARD_COLS 20
#define NUM_PAIRS 2

void swap(char *a, char *b) {
    char temp[CARD_COLS];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void shuffle(char Pair_game_table[MAX_ROWS][MAX_COLS][CARD_ROWS][CARD_COLS], int rows, int cols) {
    srand(time(NULL));      // 난수 생성
    for (int i = rows * cols - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        for (int k = 0; k < CARD_ROWS; k++) {
            for (int l = 0; l < CARD_COLS; l++) {
                swap(Pair_game_table[j / cols][j % cols][k], 
                    Pair_game_table[i / cols][i % cols][k]);
            }
        }
    }
}

void printBoard(char Pair_game_table[MAX_ROWS][MAX_COLS][CARD_ROWS][CARD_COLS], int rows, int cols) {
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
    char Pair_game_table[MAX_ROWS][MAX_COLS][CARD_ROWS][CARD_COLS] = {
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

    int rows = 2;
    int cols = 2;

    shuffle(Pair_game_table, rows, cols);
    printBoard(Pair_game_table, rows, cols);

    int x = 0; // 현재 커서 위치
    int y = 0;

    while (1) {
        char input = getchar(); // 키 입력 받기

        if (input == '\033') { // 화살표 키 입력의 첫 번째 문자
            getchar(); // 두 번째 문자 무시
            input = getchar(); // 세 번째 문자

            if (input == 'A' && y > 0) { // 위쪽 방향키
                y--;
            } else if (input == 'B' && y < rows - 1) { // 아래쪽 방향키
                y++;
            } else if (input == 'D' && x > 0) { // 왼쪽 방향키
                x--;
            } else if (input == 'C' && x < cols - 1) { // 오른쪽 방향키
                x++;
            }
        } else if (input == ' ') { // 스페이스바
            // 해당 위치의 카드 뒤집기
            printf("\033[%d;%dH", 2 + y * (CARD_ROWS + 1), x * CARD_COLS + 1); // ANSI Escape 코드를 사용하여 커서 위치 설정
            printf("                "); // 카드를 뒤집음
            printf("\033[%d;%dH", 1, 1); // 다시 커서를 맨 처음으로 옮김
        } else if (input == 'q' || input == 'Q') { // q를 누르면 종료
            break;
        }

        // 현재 위치 표시
        printf("\033[%d;%dH", 2 + y * (CARD_ROWS + 1), x * CARD_COLS + 1); // ANSI Escape 코드를 사용하여 커서 위치 설정
        printf(">"); // 커서 표시
        printf("\033[%d;%dH", 1, 1); // 다시 커서를 맨 처음으로 옮김
    }

    return 0;
}
