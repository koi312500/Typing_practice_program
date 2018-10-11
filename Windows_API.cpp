#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

// Windows api를 담은(색 변경, 커서 위치 이동 등) 소스파일 
// Windows (Microsoft사 OS) 에서만 사용가능합니다. 아닌 경우에는 이 부분을 지우시기 바랍니다.
// Windows 운영체제가 아니면 사실상 사용은 포기하시는 것이 여러분들의 건강에 좋으실것 입니다?






void SetColor(int color, int bgcolor) // 색갈 변경
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void gotoxy(short x, short y) { // 커서 위치 이동
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void CursorView(char show)//커서숨기기
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}




