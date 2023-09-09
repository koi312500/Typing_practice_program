#pragma once

// 모든 소스코드에 이 헤더파일을 사용합니다.
// 모든 소스코드의 첫 줄에 이 코드를 넣어야 합니다. -> #include "main_headfile.h"
// 모든 소스코드의 두번째 줄에 이코드를 넣어야 합니다. -> #include "main_function.h"
// 모든 함수의 선언문이 여기에 있습니다. 

#ifndef __MAIN_FUNCTION_H_KOI__
#define __MAIN_FUNCTION_H_KOI__

#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )

void SetColor(int color, int bgcolor); // 색상 맞추기
void gotoxy(short x, short y); // 커서 위치 이동
void CursorView(char show); // 커서 보이기/숨기기
void clear_lines(int y, int strlength); // y줄에서 stregth길이 만큼 글자가 삭제됩니다!
void print_start_screen(); // 첫 화면 출력 ( 처음만 사용할 듯)
void main_print(int case_print); // 메인화면의 선택화면 출력에 사용되는 함수
int select_main(); // 메인화면의 선택화면 처리
int keyboard_input(); // 화살표 키보드의 입력을 처리합니다.
void error(); // 오류시의 메뉴얼과 자동종료를 진행하는 함수입니다.
void word_practice(); // 단어 연습
void short_sentence_practice(); // 문장 연습
void Introduction_of_this_program(); // 프로그램 설명
int random(int range); // 무작위 값을 내는 함수
#endif
