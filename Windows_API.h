#pragma once

// windows api를 담은(색 변경, 커서 위치 이동 등) 헤더파일
// Windows (Microsoft사 OS) 에서만 사용가능합니다. 아닌 경우에는 이 부분을 지우시기 바랍니다.
// Windows 운영체제가 아니면 사실상 사용은 포기하시는 것이 여러분들의 건강에 좋으실것입니다?

#ifndef __WINDOW_API_H_KGW__
#define __WINDOW_API_H_KGW__

#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )

namespace Con
{
	enum {
		BLACK, // 0 : 검정 
		DARK_BLUE, // 1 : 어두운 파랑 
		DARK_GREEN, // 2 : 어두운 초록 
		DARK_SKY_BLUE, // 3 : 어두운 하늘 
		DARK_RED, // 4 : 어두운 빨강 
		DARK_VOILET, // 5 : 어두운 보라 
		DARK_YELLOW, // 6 : 어두운 노랑 
		GRAY, // 7 : 회색 
		DARK_GRAY, // 8 : 어두운 회색 
		BLUE, // 9 : 파랑 
		GREEN, // 10 : 초록 
		SKY_BLUE, // 11 : 하늘 
		RED, // 12 : 빨강 
		VOILET, // 13 : 보라 
		YELLOW, // 14 : 노랑 
		WHITE // 15
	};

	void SetColor(int color, int bgcolor)
	{
		color &= 0xf;
		bgcolor &= 0xf;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
	}

	void gotoxy(short x, short y)
	{
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

}

#endif
