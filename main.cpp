/* KOR - instruction // 한국어 설명
// 모든 소스코드의 중심이 되는 소스코드입니다.
// 최종 수정 날짜 : 2018.09.23  /// 개발자 : gunwoo7
// 이 프로그램은 Github를 사용하여 관리됩니다. (버전 관리를 위해서)
// main.cpp에만 영어 매뉴얼이 있습니다 (추후 추가 될 예정입니다)
*/

/* ENG - instruction // 영어 설명
// It's the source code that is the center of all the source codes.
// Date of last modification: 2018.09.23 /// Developer : gunwoo7
// This program is managed using Github. (for version management)
// This is the only English manual (It will be added later)
*/

#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

int main() {
	// 처음 시작이랍니다.
	system("mode con: lines=31 cols=90");
	system("title typing_program");
	CursorView(0);
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);// 실제 프로그램 사용 시 제외하고 주석 제거 금지! (배경음악이랍니다!)
	print_start_screen();
	system("cls");
	select_main();
	return 0;
}

/*
abcdefghijk
To open *.mp3:
mciSendString("open \"*.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

To play *.mp3:
mciSendString("play mp3", NULL, 0, NULL);

To play and wait until the *.mp3 has finished playing:
mciSendString("play mp3 wait", NULL, 0, NULL);

To replay (play again from start) the *.mp3:
mciSendString("play mp3 from 0", NULL, 0, NULL);

To replay and wait until the *.mp3 has finished playing:
mciSendString("play mp3 from 0 wait", NULL, 0, NULL);

To play the *.mp3 and replay it every time it ends like a loop:
mciSendString("play mp3 repeat", NULL, 0, NULL);
*/
