#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

// 시작화면의 출력을 담당하고 있습니다.(라고 쓰고 처리까지 담당한다고 읽습니다.)

void clear_lines(int y, int strlength) { // y번째 줄을 strlength 길이를 삭제
	int i;

	gotoxy(0, y);
	for (i = 0; i < strlength; i++) {
		printf(" ");
	}
}

void print_start_screen() { // 시작 화면 출력

	int i;
	int space_x, space_y; // 띄어쓰기 공간
	space_x = 7;
	space_y = 1;

	while (1)
	{
		system("cls");
		for (i = 0; i < space_y; i++) printf("\n");
		gotoxy(space_x * 2, space_y + 1); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		gotoxy(space_x * 2, space_y + 2); printf("  ◆◆◆◆◆◆  ◆              ◆◆◆◆◆◆  ◆\n");
		gotoxy(space_x * 2, space_y + 3); printf("  ●            ●                  ●●      ●\n");
		gotoxy(space_x * 2, space_y + 4); printf("  ●            ●                  ●●      ●\n");
		gotoxy(space_x * 2, space_y + 5); printf("  ★★★★★★  ★★★★★        ★    ★    ★★★★★\n");
		gotoxy(space_x * 2, space_y + 6); printf("  ■            ■                ■    ■    ■\n");
		gotoxy(space_x * 2, space_y + 7); printf("  ◆            ◆              ◆        ◆  ◆\n");
		gotoxy(space_x * 2, space_y + 8); printf("  ●●●●●●  ●              ●        ●  ●\n");
		gotoxy(space_x * 2, space_y + 9); printf("○○○○○○○○○○○○○○○○○○○○○○○○○○○○○\n");
		gotoxy(space_x * 2, space_y + 10); printf("☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆\n");
		gotoxy(space_x * 2, space_y + 11); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
		gotoxy(space_x * 2, space_y + 12); printf("     ◆◆          ◆                ◆◆◆\n");
		gotoxy(space_x * 2, space_y + 13); printf("    ●   ●    ●●●                ●  ●\n");
		gotoxy(space_x * 2, space_y + 14); printf("  ●       ●      ●              ●      ●\n");
		gotoxy(space_x * 2, space_y + 15); printf("  ★       ★      ★            ★          ★\n");
		gotoxy(space_x * 2, space_y + 16); printf("    ■   ■    ■■■          ■              ■\n");
		gotoxy(space_x * 2, space_y + 17); printf("     ◆◆          ◆        ●●●●●●●●●●●\n");
		gotoxy(space_x * 2, space_y + 18); printf("                               ●              ●\n");
		gotoxy(space_x * 2, space_y + 19); printf("    ●                         ★              ★\n");
		gotoxy(space_x * 2, space_y + 20); printf("    ★                         ■■■■■■■■■\n");
		gotoxy(space_x * 2, space_y + 21); printf("    ■                         ◆              ◆\n");
		gotoxy(space_x * 2, space_y + 22); printf("    ◆◆◆◆◆◆◆◆           ●●●●●●●●●\n");
		gotoxy(space_x * 2, space_y + 23); printf("◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎◎\n");
		gotoxy(space_x * 2, space_y + 24); printf("○○○○○○○○○○○○○○○○○○○○○○○○○○○○○\n");
		gotoxy(space_x * 2, space_y + 25); printf("              press any key to start program!\n");

		for (i = 0; i < 24; i++) {
			int time_now = time(NULL);
			while (time(NULL) - time_now == 0 && !kbhit()); // 1초가 지나가지 않거나 키보드가 눌리지 않았을 때 까지
			if (time(NULL) - time_now == 0) return;
			clear_lines(i + space_y, 58 + space_x * 2);
		}
	}
	system("cls");
}

