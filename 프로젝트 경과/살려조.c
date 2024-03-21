#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <termios.h>

#define MAX_IMAGES 20
#define MAX_BOARD 6

const char* images[MAX_IMAGES] = {
                "|---------------|\n"
                "|               |\n"
                "|     (\\_/)     |\n"
                "|    (>'.'<)    |\n"
                "|    (\")_(\")    |\n"
                "|               |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|^__^           |\n"
                "|(oo)\\_______   |\n"
                "|(__)\\       )\\ |\n"
                "|    ||----w |  |\n"
                "|    ||     ||  |\n"
                "|---------------|\n"
            , 
                "|---------------|\n"
                "|               |\n"
                "|     /\\_/\\     |\n"
                "|    ( o.o )    |\n"
                "|     > ^ <     |\n"
                "|               |\n"
                "|---------------|\n"            
            ,            
                "|---------------|\n"
                "|    / \\___     |\n"
                "|   (     @\\___ |\n"
                "|   /         O |\n"
                "|  /    (_____/ |\n"
                "|  /_____/   U  |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|               |\n"
                "|     (\\_/)     |\n"
                "|    (>'.'<)    |\n"
                "|    (\")_(\")    |\n"
                "|               |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|^__^           |\n"
                "|(oo)\\_______   |\n"
                "|(__)\\       )\\ |\n"
                "|    ||----w |  |\n"
                "|    ||     ||  |\n"
                "|---------------|\n"
            , 
                "|---------------|\n"
                "|               |\n"
                "|     /\\_/\\     |\n"
                "|    ( o.o )    |\n"
                "|     > ^ <     |\n"
                "|               |\n"
                "|---------------|\n"            
            ,            
                "|---------------|\n"
                "|    / \\___     |\n"
                "|   (     @\\___ |\n"
                "|   /         O |\n"
                "|  /    (_____/ |\n"
                "|  /_____/   U  |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|               |\n"
                "|     (\\_/)     |\n"
                "|    (>'.'<)    |\n"
                "|    (\")_(\")    |\n"
                "|               |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|^__^           |\n"
                "|(oo)\\_______   |\n"
                "|(__)\\       )\\ |\n"
                "|    ||----w |  |\n"
                "|    ||     ||  |\n"
                "|---------------|\n"
            , 
                "|---------------|\n"
                "|               |\n"
                "|     /\\_/\\     |\n"
                "|    ( o.o )    |\n"
                "|     > ^ <     |\n"
                "|               |\n"
                "|---------------|\n"            
            ,            
                "|---------------|\n"
                "|    / \\___     |\n"
                "|   (     @\\___ |\n"
                "|   /         O |\n"
                "|  /    (_____/ |\n"
                "|  /_____/   U  |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|               |\n"
                "|     (\\_/)     |\n"
                "|    (>'.'<)    |\n"
                "|    (\")_(\")    |\n"
                "|               |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|^__^           |\n"
                "|(oo)\\_______   |\n"
                "|(__)\\       )\\ |\n"
                "|    ||----w |  |\n"
                "|    ||     ||  |\n"
                "|---------------|\n"
            , 
                "|---------------|\n"
                "|               |\n"
                "|     /\\_/\\     |\n"
                "|    ( o.o )    |\n"
                "|     > ^ <     |\n"
                "|               |\n"
                "|---------------|\n"            
            ,            
                "|---------------|\n"
                "|    / \\___     |\n"
                "|   (     @\\___ |\n"
                "|   /         O |\n"
                "|  /    (_____/ |\n"
                "|  /_____/   U  |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|               |\n"
                "|     (\\_/)     |\n"
                "|    (>'.'<)    |\n"
                "|    (\")_(\")    |\n"
                "|               |\n"
                "|---------------|\n"
            ,
                "|---------------|\n"
                "|^__^           |\n"
                "|(oo)\\_______   |\n"
                "|(__)\\       )\\ |\n"
                "|    ||----w |  |\n"
                "|    ||     ||  |\n"
                "|---------------|\n"
            , 
                "|---------------|\n"
                "|               |\n"
                "|     /\\_/\\     |\n"
                "|    ( o.o )    |\n"
                "|     > ^ <     |\n"
                "|               |\n"
                "|---------------|\n"            
            ,            
                "|---------------|\n"
                "|    / \\___     |\n"
                "|   (     @\\___ |\n"
                "|   /         O |\n"
                "|  /    (_____/ |\n"
                "|  /_____/   U  |\n"
                "|---------------|\n"          
};

int display_menu() {
    int menu;

    system("clear");
    
    printf("같은 그림 찾기 게임\n");
    printf("===================\n");
    printf("     게임 메뉴\n");
    printf("===================\n");
    printf("1. 게임 시작\n");
    printf("2. 사진 체크\n");
    printf("3. 크레딧\n");
    printf("4. 게임 종료\n");

    scanf("%d", &menu);
    return menu;
}

void display_credits() {
    printf("\033[2J\033[H"); // 화면 지우기

    printf("==\t윤현중\t\t==\n\n");
    sleep(1);

    printf("==\t홍솔아\t\t==\n\n");
    sleep(1);

    printf("==\t이진우\t\t==\n\n");
    sleep(1);

    printf("==\t송해든\t\t==\n\n");
    sleep(3);
}

void display_images() {
    printf("\033[2J\033[H"); // 화면 지우기 클리어 함수와 같음

    for (int i = 0; i < MAX_IMAGES; ++i) {
        printf("%s\n", images[i]); // 이미지 출력
    }
    sleep(10); // 이미지를 잠시 표시한 후 메인 메뉴로 복귀
}

void shuffleCards(int *array, int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

void initializeBoard(int boardSize) {
    int board[MAX_BOARD][MAX_BOARD] = {0};
    int cardIndexes[MAX_IMAGES / 2]; // 보드 크기의 절반만큼만 필요
    int placedCards = 0; // 배치된 카드 수

    // 각 카드 인덱스를 초기화
    for (int i = 0; i < MAX_IMAGES / 2; i++) {
        cardIndexes[i] = i;
    }

    // 보드 초기화
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            board[i][j] = -1; // 초기값 설정
        }
    }

    while (placedCards < boardSize * boardSize) {
        for (int i = 0; i < MAX_IMAGES / 2; i++) {
            for (int repeat = 0; repeat < 2; repeat++) { // 각 카드를 두 번 배치
                int x, y;
                do {
                    x = rand() % boardSize;
                    y = rand() % boardSize;
                } while (board[x][y] != -1); // 빈 위치를 찾을 때까지 반복

                board[x][y] = cardIndexes[i];
                placedCards++;
            }
        }
    }

    // 카드 출력 (디버깅 목적)
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}


void play_game() {
    printf("\033[2J\033[H"); // 화면 지우기
    printf("게임 시작!\n");


    int boardSize = 6;
    initializeBoard(boardSize);

    sleep(3);
    // 추가적인 게임 로직 구현이 필요
    // 사용자 입력을 받아 카드를 선택하고, 매칭이 되는지 확인하는 로직
}


int main() {
    int choice;
    srand(time(NULL)); // 랜덤 시드 초기화

    while (1) {
        choice = display_menu();

        switch(choice) {
            case 1:
                play_game();
                break;
            case 2:
                display_images();
                break;
            case 3:
                display_credits();
                // 크레딧 보여주고 메뉴로 돌아가야 하므로, 여기에 display_menu()를 호출하지 않음
                break;
            case 4:
                printf("\033[2J\033[H");
                printf("게임을 종료합니다.\n");
                exit(0); // 프로그램 종료
            default:
                printf("잘못된 선택입니다.\n");
                sleep(1); // 잠시 대기 후 다시 메뉴를 보여줌
        }
    }

    return 0; // 실제로는 여기에 도달하지 않음
}
