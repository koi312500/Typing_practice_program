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

void clear_lines(int y, int strlength);
void print_start_screen();
void main_print(int case_print);

#endif
