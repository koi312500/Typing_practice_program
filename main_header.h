#pragma once

// 모든 소스코드에 이 헤더파일을 사용합니다.
// 해더파일들의 include 문과 함수 선언문이 여기 있습니다. 

#ifndef __MAIN_HEADER_H_KGW__
#define __MAIN_HEADER_H_KGW__

#pragma comment(lib, "winmm.lib")
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <cstdio>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>


#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )

void clear_lines(int y, int strlength); // y줄에서 stregth길이 만큼 글자가 삭제됩니다!
void print_start_screen(); // 첫 화면 출력 ( 처음만 사용할 듯)
void main_print(int case_print); // 메인 화면 출력

#endif
