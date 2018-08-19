#include "main_header.h"
#include "Windows_API.h"


void clear_lines(int y, int strlength) {
	int i;

	Con::gotoxy(0, y);
	for (i = 0; i < strlength; i++) {
		printf(" ");
	}
}

void print_start_screen() {
	using namespace Con;
	CursorView(0);

	int i;
	int space_x, space_y;
	space_x = 7;
	space_y = 1;

	while (1)
	{
		system("cls");
		for (i = 0; i < space_y; i++) printf("\n");
		gotoxy(space_x * 2, space_y + 1); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
		gotoxy(space_x * 2, space_y + 2); printf("  ¡ß¡ß¡ß¡ß¡ß¡ß  ¡ß              ¡ß¡ß¡ß¡ß¡ß¡ß  ¡ß\n");
		gotoxy(space_x * 2, space_y + 3); printf("  ¡Ü            ¡Ü                  ¡Ü¡Ü      ¡Ü\n");
		gotoxy(space_x * 2, space_y + 4); printf("  ¡Ü            ¡Ü                  ¡Ü¡Ü      ¡Ü\n");
		gotoxy(space_x * 2, space_y + 5); printf("  ¡Ú¡Ú¡Ú¡Ú¡Ú¡Ú  ¡Ú¡Ú¡Ú¡Ú¡Ú        ¡Ú    ¡Ú    ¡Ú¡Ú¡Ú¡Ú¡Ú\n");
		gotoxy(space_x * 2, space_y + 6); printf("  ¡á            ¡á                ¡á    ¡á    ¡á\n");
		gotoxy(space_x * 2, space_y + 7); printf("  ¡ß            ¡ß              ¡ß        ¡ß  ¡ß\n");
		gotoxy(space_x * 2, space_y + 8); printf("  ¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü  ¡Ü              ¡Ü        ¡Ü  ¡Ü\n");
		gotoxy(space_x * 2, space_y + 9); printf("¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û\n");
		gotoxy(space_x * 2, space_y + 10); printf("¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù¡Ù\n");
		gotoxy(space_x * 2, space_y + 11); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
		gotoxy(space_x * 2, space_y + 12); printf("     ¡ß¡ß          ¡ß                ¡ß¡ß¡ß\n");
		gotoxy(space_x * 2, space_y + 13); printf("    ¡Ü   ¡Ü    ¡Ü¡Ü¡Ü                ¡Ü  ¡Ü\n");
		gotoxy(space_x * 2, space_y + 14); printf("  ¡Ü       ¡Ü      ¡Ü              ¡Ü      ¡Ü\n");
		gotoxy(space_x * 2, space_y + 15); printf("  ¡Ú       ¡Ú      ¡Ú            ¡Ú          ¡Ú\n");
		gotoxy(space_x * 2, space_y + 16); printf("    ¡á   ¡á    ¡á¡á¡á          ¡á              ¡á\n");
		gotoxy(space_x * 2, space_y + 17); printf("     ¡ß¡ß          ¡ß        ¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü\n");
		gotoxy(space_x * 2, space_y + 18); printf("                               ¡Ü              ¡Ü\n");
		gotoxy(space_x * 2, space_y + 19); printf("    ¡Ü                         ¡Ú              ¡Ú\n");
		gotoxy(space_x * 2, space_y + 20); printf("    ¡Ú                         ¡á¡á¡á¡á¡á¡á¡á¡á¡á\n");
		gotoxy(space_x * 2, space_y + 21); printf("    ¡á                         ¡ß              ¡ß\n");
		gotoxy(space_x * 2, space_y + 22); printf("    ¡ß¡ß¡ß¡ß¡ß¡ß¡ß¡ß           ¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü¡Ü\n");
		gotoxy(space_x * 2, space_y + 23); printf("¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý¡Ý\n");
		gotoxy(space_x * 2, space_y + 24); printf("¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û¡Û\n");
		gotoxy(space_x * 2, space_y + 25); printf("              press any key to start program!\n");

		for (i = 0; i < 24; i++) {
			int time_now = time(NULL);
			while (time(NULL) - time_now == 0 && !kbhit());
			if (time(NULL) - time_now == 0) return;
			clear_lines(i + space_y, 58 + space_x * 2);
		}
	}
	system("cls");
}

