#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "utility.h"

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

int main() {
    int choice;

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
                break;
            case 4:
                printf("\033[2J\033[H");
                printf("게임을 종료합니다.\n");
                exit(0);
            default:
                printf("잘못된 선택입니다.\n");
                sleep(1);
        }
    }

    return 0;
}
