#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include "utility.h"
#include "game.h"

struct termios orig_termios;

void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);

    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ICANON | ECHO);

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

//크레딧 출력 로직
void display_credits() {
	printf("\033[2J\033[H"); // Clear screen
	
	printf("\n");
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
	sleep(1);
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
	printf("\n");
	sleep(1);
	printf("　　　　　　　　　　　　　　　　　　Present By Team IoT3...Thank you...\n");
	sleep(1);
	sleep(600);
}

//이미지 출력 로직
void display_images() {
    printf("\033[2J\033[H"); // 화면 지우기 클리어 함수와 같음

    for (int img = 0; img < MAX_IMAGES / 2; ++img) { // 각 이미지에 대해 반복
        for (int row = 0; row < IMG_HEIGHT; ++row) { // 각 이미지의 모든 행에 대해 반복
            // 이미지의 현재 행을 출력
            printf("%s\n", images[img][row]);
        }
        printf("\n"); // 이미지 간 구분을 위해 빈 줄 추가
    }
    sleep(30); // 이미지를 잠시 표시한 후 메인 메뉴로 복귀
}
