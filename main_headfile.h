#pragma once

// 모든 소스코드에 이 헤더파일을 사용합니다.
// 모든 소스코드의 첫 줄에 이 코드를 넣어야 합니다. -> #include "main_headfile.h"
// 모든 소스코드의 두번째 줄에 이코드를 넣어야 합니다. -> #include "main_function.h"
// 해더파일들의 include 문이 여기 있습니다. 

#ifndef __MAIN_HEADFILE_H_KOI__
#define __MAIN_HEADFILE_H_KOI__

#define _CRT_SECURE_NO_WARNINGS // Visual Stdio C++ 에서 scanf, printf 를 보안 경고 없이 사용하기 위함.
#include <cstdio> // 헤더 파일 선언
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <cstdio>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib, "winmm.lib") // PlaySound() 함수 사용을 위해

#endif