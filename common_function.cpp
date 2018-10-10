#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

// 공통적으로 사용되거나 따로 분류할 수 없는 함수를 모아둔 곳입니다.

int random(int range) {
	srand(time(NULL) * time(NULL) * time(NULL));
	return rand() % range;
}
int keyboard_input() { // 키보드 처리 받기
	int key = getch();
	if (key == 13) return 0;
	else if (key == 224) { // 화살표는 2바이트 확장 코드이다.
		key = getch();

		switch (key) { 
		case 72:  // 왼쪽 화살표 // 4
			return 8;
			break;
		case 75: // 아래쪽 화살표 // 2
			return 4;
			break; 
		case 77: //  위쪽 화살표 // 8
			return 6;
			break;
		case 80: // 오른쪽 화살표 // 6
			return 2;
			break;
		}
	}
	else return -1;
}

void error() {
	system("cls");
	printf("오류가 발생하였습니다. (error 함수 실행) \n");
	Sleep(700);
	printf("소스코드 또는 입력하신 결과에 문제가 있습니다.\n");
	Sleep(700);
	printf("다시 한번 입력 결과를 확인 해 주시고\n");
	Sleep(700);
	printf("아닐 경우 개발자에게 연락을 해 주십시오.\n");
	Sleep(700);
	printf("개발자 이메일 : ---- \n"); // --- 부분은 이메일을 입력하는 곳
	Sleep(700);
	printf("입력한 것도 같이 알려주시면 해결하기 쉽습니다.\n");
	Sleep(700);
	printf("4초 후 아무키나 입력하시면 종료됩니다.\n");
	Sleep(4000);
	system("PAUSE");
	_Exit (EXIT_FAILURE);
	
}
