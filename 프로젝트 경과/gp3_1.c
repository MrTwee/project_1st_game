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
    int cardIndexes[MAX_IMAGES]; // 이 배열은 사용 가능한 카드 인덱스를 저장합니다.

    // 각 카드 인덱스를 초기화
    for (int i = 0; i < MAX_IMAGES; i++) {
        cardIndexes[i] = i;
    }

    // 카드 인덱스를 셔플
    shuffleCards(cardIndexes, MAX_IMAGES);

    // 보드에 카드 배치
    int cardCount = 0;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j += 2) {
            // 같은 카드를 2개씩 배치
            board[i][j] = board[i][j + 1] = cardIndexes[cardCount++];
            if (cardCount >= boardSize * boardSize / 2) {
                // 필요한 카드 수에 도달하면 중단
                break;
            }
        }
        if (cardCount >= boardSize * boardSize / 2) {
            break;
        }
    }

    // 카드 출력
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            printf("%s ", images[board[i][j]]);
        }
        printf("\n");
    }
}

void play_game() {
    printf("\033[2J\033[H"); // 화면 지우기 및 커서 이동
    printf("게임을 시작합니다...\n\n");

    // 게임 보드 초기화 및 카드 배치
    initializeBoard(MAX_BOARD);

    // 게임 로직 구현 (사용자 입력 받기, 선택된 카드 비교 등)
    // ...
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
                // 크레딧 보여주고 메뉴로 돌아가야 하므로, 여기에 display_menu()를 호출하지 않음.
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
