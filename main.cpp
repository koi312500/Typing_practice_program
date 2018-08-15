/* KOR - instruction // 한국어 설명
// 모든 소스코드의 중심이 되는 소스코드입니다.
// 최종 수정 날짜 : 2018.08.15  /// 개발자 : gunwoo7
// 이 프로그램은 Github를 사용하여 관리됩니다. (버전 관리를 위해서)
// main.cpp에만 영어 매뉴얼이 있습니다 (추후 추가 될 예정입니다)
*/

/* ENG - instruction // 영어 설명
// It's the source code that is the center of all the source codes.
// Date of last modification: 2018.08.15 /// Developer : gunwoo7
// This program is managed using Github. (for version management)
// This is the only English manual (It will be added later)
*/

#include "main_header.h"

int main() {
	system("mode con: lines=31 cols=90");
	system("title 타자 연습 프로그램");
	print_start_screen();
	system("cls");
	main_print(1);
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

