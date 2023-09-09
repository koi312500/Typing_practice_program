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
	system("mode con: lines=31 cols=90"); // 콘솔 사이즈 맞추기
	system("title typing_program"); // 콘솔의 이름 정하기
	CursorView(0); // 커서를 숨긴다.
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);// 배경음악
	print_start_screen(); // 초기 화면 출력
	system("cls");
	select_main(); // 메인 화면 이동
	return -1; // 비 정상적 종료(무한 반복문 탈출 상황)
}
