#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <termios.h>

#define MAX_IMAGES 20
#define MAX_BOARD 6

/*const char* images[MAX_IMAGES] = {
			
			 "|---------------|\n",
                "|               |\n",
                "|     (\\_/)     |\n",
                "|    (>'.'<)    |\n",
                "|    (\")_(\")    |\n",
                "|               |\n",
                "|---------------|\n",
                
             ,
			
                "|---------------|\n",
                "|^__^           |\n",
                "|(oo)\\_______   |\n",
                "|(__)\\       )\\ |\n",
                "|    ||----w |  |\n",
                "|    ||     ||  |\n",
                "|---------------|\n",
            ,
                "|---------------|\n",
                "|               |\n",
                "|     /\\_/\\     |\n",
                "|    ( o.o )    |\n",
                "|     > ^ <     |\n",
                "|               |\n",
                "|---------------|\n",           
                ,        
                "|---------------|\n",
                "|    / \\___     |\n",
                "|   (     @\\___ |\n",
                "|   /         O |\n",
                "|  /    (_____/ |\n",
                "|  /_____/   U  |\n",
                "|---------------|\n",
            ,

			"|---------------|\n",
			"|    ,--./,-.   |\n",
			"|   / #      \\  |\n",
			"|   |        |  |\n",
			"|   \\        /  |\n",
			"|    `._,._,'   |\n",
			"|---------------|\n",
            ,
			"|---------------|\n",
			"|   .--\\\"/--.   |\n", 
			"|  ((+) .  .:)  |\n",
			"|  |`.-(o)-.'|  |\n",
			"|  \\/  \\_/  \\/  |\n",
			"|               |\n",
			"|---------------|\n",
             ,
			"|---------------|\n",
			"|     \\~~~/     |\n",
			"|      \\ /      |\n",
			"|       V       |\n",
			"|       |       |\n",
			"|      ---      |\n",
			"|---------------|\n",            
            ,          
			"|---------------|\n",
			"|      ,-.      |\n",
			"|    _(*_*)_    |\n",
			"|   (_  o  _)   |\n",
			"|     / o \\     |\n",
			"|    (_/ \\_)    |\n",
			"|---------------|\n",
            ,
			"|---------------|\n",
			"|               |\n",
			"|   _ \\'-_,#    |\n",
			"|  _\\'--','`|   |\n",
			"|  \\`---`  /    |\n",
			"|   `----'`     |\n",
			"|---------------|\n",
            ,
			"|---------------|\n",
			"|    .'o O'-.   |\n",
			"|   / O o_.-`|  |\n",
			"|  /O_.-'  O |  |\n",
			"|  | o  o_.-`   |\n",
			"|  '---`        |\n",
			"|---------------|\n",
            ,
			"|---------------|\n",
			"|      _.-;;-._ |\n",
			"|'..-'|   ||   ||\n",
			"|'..-'|_.-;;-._||\n",
			"|'..-'|   ||   ||\n",
			"|'..-'|_.-''-._||\n",
			"|---------------|\n",           
            ,        
			"|---------------|\n",
			"|    /_/\\/\\     |\n",
			"|    \\_\\  /     |\n",
			"|    /_/  \\     |\n",
			"|    \\_\\/\\ \\    |\n",
			"|       \\_\\/    |\n",
			"|---------------|\n",
            ,
			"ㅣ-------------- |\n",
			"ㅣ  > `-,,,-' <  |\n",
			"ㅣ`-.         .- |\n",
			"ㅣ  / 'e___e` \\  |\n",
			"ㅣ (   (o o)   ) |\n",
			"ㅣ _\\_  `='  _/_ |\n",
			"ㅣ---------------|\n",
            ,
			"ㅣ--------------ㅣ\n",
			"ㅣ      /\\      ㅣ\n",
			"ㅣ     /★ \\     ㅣ\n",
			"ㅣ    / \\/\\*    ㅣ\n",
			"ㅣ   /★ \\*\\/\\   ㅣ\n",
			"ㅣ  /________\\⠀ ㅣ\n",
			"ㅣ--------------ㅣ\n",
             ,
			"ㅣ--------------ㅣ\n",
			"ㅣ *  _____    *ㅣ\n",
			"ㅣ __//_||_\\__  ㅣ\n",
			"ㅣ/◎________◎ \\ ㅣ\n",
			"ㅣ *    *    *  ㅣ\n",
			"ㅣ    *   *     ㅣ\n",
			"ㅣ--------------ㅣ\n",          
            ,        
			"|---------------|\n",
			"ㅣ    💧    💧  | \n",
			"ㅣ 💧     💧    |\n",
			"ㅣ    ╭ ⁀ ⁀ ╮   |\n",
			"ㅣ　 ( '👅'  )  |\n",
			"ㅣ    ╰ ‿ ‿ ╯   | \n",
			"|---------------|\n",
            ,
			"ㅣ-------------- |\n",
			"ㅣｒ⌒＼,,,／⌒ミ  |\n",
			"ㅣゞ　　　　ヾ　/|\n",
			"ㅣ（　￣ ▲￣)/// |\n",
			"ㅣ ノ   　  ///  |\n",
			"ㅣ（　∪　　つ//  |\n",
			"ㅣ-------------- | \n",
            ,
 			"ㅣ---------------|\n",
			"ㅣ   ／￣＼　    |\n",
			"ㅣ /　*´ω｀)つ　 |\n",
			"ㅣ　|　つ　／    |\n",
			"ㅣ　＼　　 ＼＿  |\n",
			"ㅣ　　　￣￣＼／ |\n",
			"ㅣ---------------|\n",
             ,
			"ㅣ---------------|\n",
			"ㅣ       ◝◜      |\n",
			"ㅣ ╱◥◣    ◝◜     |\n",
			"ㅣ │∩ │◥███◣ ╱◥  |\n",
			"ㅣ ╱◥◣ ◥████◣▓   |\n",
			"ㅣ │╱◥█◣║∩∩∩ ║◥  |\n",
			"ㅣ---------------|\n",          
             ,           
			"ㅣ---------------|  \n",
			"ㅣ  ┻┳┻┳|        |\n",
			"ㅣ  ┳┻┳┻|__∧     |\n",
			"ㅣ  ┻┳┻┳|•﹃ •)  |\n",
			"ㅣ  ┳┻┳┻|⊂ ﾉ     |\n",
			"ㅣ  ┻┳┻┳|Ｊ      |\n",
			"ㅣ---------------|  \n",  
};
*/

const char* images[MAX_IMAGES] = {
			
			 ("|---------------|\n"),
                ("|               |\n"),
                ("|     (\\_/)     |\n"),
                ("|    (>'.'<)    |\n"),
                ("|    (\")_(\")    |\n"),
                ("|               |\n"),
                ("|---------------|\n"),
                
                ("|---------------|\n"),
                ("|               |\n"),
                ("|     (\\_/)     |\n"),
                ("|    (>'.'<)    |\n"),
                ("|    (\")_(\")    |\n"),
                ("|               |\n"),
                ("|---------------|\n"),
                
                
                };


int display_menu() {
    int menu;

    system("clear");
    
    /*printf("\n");
    printf("　　　　 ■ ■ ■ ■ 　 ■ ■ ■ 　　■ ■ 　  ■ 　 ■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■\n");
    printf("　　　　 ■ 　　　　　 ■ 　 　 ■  ■    ■ 　 ■ 　  ■ 　 　 　　■    ■\n");
    printf(" 　　　　■ ■ ■ ■ 　　 ■ 　 　 ■   ■   ■ 　 ■  　 ■ 　 　 ■ ■ ■ 　 ■ ■ ■ ■\n");
    printf(" 　　　　■ 　　　　　 ■ 　 　 ■    ■  ■  　■  　 ■ 　 　 　　■    ■ 　  ■\n");
    printf(" 　　　　■ 　 　 　 ■ ■ ■ 　　■ 　  ■ ■　　■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■\n");
*/

 /*   printf("\n");
    printf("\033[32m▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ \n");
    printf("\033[32m▧                                                                                 ▧\n");
    printf("\033[32m▧ \033[0m ");
    printf("　　　■ ■ ■ ■ 　 ■ ■ ■ 　　■ ■ 　  ■ 　 ■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■　　     \033[32m▧\n");
    printf("\033[32m▧\033[0m ");
    printf("　　 　■ 　　　　　 ■ 　 　 ■  ■    ■ 　 ■ 　  ■ 　 　 　　■    ■　　  　       \033[32m▧ \n");
    printf("\033[32m▧ \033[0m ");
    printf(" 　　 ■ ■ ■ ■ 　　 ■ 　 　 ■   ■   ■ 　 ■  　 ■ 　 　 ■ ■ ■ 　 ■ ■ ■ ■       　\033[32m▧ \n");
    printf("\033[32m▧  \033[0m ");  
    printf(" 　  ■ 　　　　　 ■ 　 　 ■    ■  ■  　■  　 ■ 　 　 　　■    ■ 　  ■         \033[32m▧ \n");
    printf("\033[32m▧ \033[0m ");
    printf(" 　   ■ 　 　 　 ■ ■ ■ 　　■ 　  ■ ■　　■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■         \033[32m▧ \n");
    printf("\033[32m▧                                                                                 ▧ \n");
    printf("\033[32m▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ \n");// 테투리 색상

    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("　　　　　　　　　　　　　 　  같은 그림 찾기 게임\n");
    printf("　　　　　　　　　　　　　 　  ====================\n");
    printf("　　　　　　　　　　　　　 　　　  　게임 메뉴\n");
    printf("　　　　　　　　　　　　 　  　====================\n");
    printf("　　　　　　　　　　　　　　   　　1. 게임 시작\n");
    printf("　　　　　　　　　　　　　　   　　2. 사진 체크\n");
    printf("　　　　　　　　　　　　　　   　　3.  크레딧\n");
    printf("　　　　　　　　　　　　　　　   　4. 게임 종료\n");
*/


    printf("\n");
    printf("\033[94m▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ \n");
    printf("\033[94m▧                                                                                 ▧\n");
    printf("\033[94m▧ \033[0m ");
    printf("　　　■ ■ ■ ■ 　 ■ ■ ■ 　　■ ■ 　  ■ 　 ■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■　　     \033[94m▧\n");
    printf("\033[94m▧\033[0m ");
    printf("　　 　■ 　　　　　 ■ 　 　 ■  ■    ■ 　 ■ 　  ■ 　 　 　　■    ■　　  　       \033[94m▧ \n");
    printf("\033[94m▧ \033[0m ");
    printf(" 　　 ■ ■ ■ ■ 　　 ■ 　 　 ■   ■   ■ 　 ■  　 ■ 　 　 ■ ■ ■ 　 ■ ■ ■ ■       　\033[94m▧ \n");
    printf("\033[94m▧  \033[0m ");  
    printf(" 　  ■ 　　　　　 ■ 　 　 ■    ■  ■  　■  　 ■ 　 　 　　■    ■ 　  ■         \033[94m▧ \n");
    printf("\033[94m▧ \033[0m ");
    printf(" 　   ■ 　 　 　 ■ ■ ■ 　　■ 　  ■ ■　　■ ■ ■ 　 　 ■ ■ ■ ■ 　 ■ ■ ■ ■         \033[94m▧ \n");
    printf("\033[94m▧                                                                                 ▧ \n");
    printf("\033[94m▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ ▧ \n");// 테투리 색상

    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("　　　　　　　　　　　　　 　 Find the Same Picture\n");
    printf("　　　　　　　　　　　　　 　-----------------------\n");
    printf("　　　　　　　　　　　　　 　 　　   M e n u\n");
    printf("　　　　　　　　　　　　 　  -----------------------\n");
    printf("　　　　　　　　　　　　　　   1.   Game Start\n");
    printf("　　　　　　　　　　　　　   　2.   Card Check\n");
    printf("　　　　　　　　　　　　　　   3.   Credit\n");
    printf("　　　　　　　　　　　　　　   4.   End\n");

    scanf("%d", &menu);
    return menu;
}
#include <stdio.h>
#include <unistd.h>

void display_credits() {
    printf("\033[2J\033[H"); // Clear screen
    
  
    printf("\n");
    printf("　　　　　　　　        Sola HONG　Data Manager\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　　　 　Subtitle/Translate\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　　 　　Line Producer\n");
    sleep(1);
    printf("\n");
    
    printf("　　　　　　　　　　 Haedeun SONG　Production Assistant\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　　 　　Art Design\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　　 　　Tech Engineer\n");
    sleep(1);
    printf("\n");
    
    printf("　　　　　　　　　　　 Jinwoo LEE　Producer & Director\n");
    sleep(0.8);
    printf("　　　　　　　　　　　　　　 　　　Motion Graphic Design\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　 　　　Superviser\n");
    sleep(1);
    printf("\n");
    
    printf("　　　　　　　　　 Hyunjoong YOON　Director\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　 　　　Art Design\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　 　　　Coordinating\n");
    printf("\n");
    sleep(1);
    printf("　　　　　　　　　　　　　　　　　　Present By Team IoT3...Thank you...\n");
    sleep(1);
    printf("\n");
    printf("                    🛸　　　 　🌎　°　　🌓　•　　.°•　　　🚀 ✯\n");
    printf("　       　             　★　*　　　　　°　　　　🛰 　°·　　   🪐\n");
    printf("                           .　　　•　° ★　•  ☄\n");
    printf("                              ▁▂▃▄▅▆▇▇▆▅▄▃▁▂\n");
    
    sleep(600);
}

int main(void)
{
    display_credits();
    
    return 0;
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
/*
#include <stdio.h>
#include <unistd.h>

// 크레딧 텍스트 배열
char *credits[] = {
    "Sola HONG    Data Manager",
    "Haedeun SONG    Production Assistant",
    "Jinwoo LEE    Producer & Director",
    "Hyunjoong YOON    Director",
    "Present By Team IoT3...Thank you..."
};

// 크레딧 텍스트 배열의 크기
int num_credits = sizeof(credits) / sizeof(credits[0]);

// 크레딧을 화면에 출력하고, 화면을 위로 스크롤하는 함수
void scroll_credits() {
    int i, j;
    for (i = 0; i <= num_credits; i++) {
        printf("\033[2J\033[H"); // Clear screen
        // 각 크레딧 텍스트를 출력할 때마다 이전 크레딧들을 출력하여 스크롤 효과를 구현
        for (j = i - 1; j >= 0; j--) {
            printf("%s\n", credits[j]);
        }
        // 마지막 크레딧은 위로 이동하며 출력
        if (i < num_credits) {
            printf("%s\n", credits[i]);
        }
        // 0.5초 동안 대기
        usleep(500000);
    }
}

int main() {
    scroll_credits();
    return 0;
}*/
