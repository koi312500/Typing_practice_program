#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

// 메인화면 처리를 담당하는 함수가 여기에 있습니다.
int select_main() {
	int loc = 1;
	main_print(1);
	while (1) {
		int key_input = keyboard_input(); // 키보드 입력 값을 받는다.

		if (key_input == 6) { // 메뉴의 위치를  선택한다. -> 오른쪽 키를 눌렀을 때
			if (loc == 3) loc = 1;
			else loc++;
		}
		else if (key_input == 4) { // 왼쪽 키를 눌렀을때 
			if (loc == 1) loc = 3;
			else loc--;
		}
		else if (key_input == 0) { // 엔터 키를 눌렀을때 ( 메뉴를 선택했을 때)
			switch (loc) { // 현재 선택 메뉴 실행
			case 1:
				word_practice(); // 단어 연습
				break;
			case 2:
				short_sentence_practice(); // 문장 연습
				break;
			case 3:
				Introduction_of_this_program(); // 프로그램 소개
				break;
			default:
				error(); //오류
			}
		}
		main_print(loc); // 모든 일이 진행 된 후에는 다시 메인 화면 출력
		Sleep(500); // 없으면 민감도가 높아짐
	}
}

void word_practice() { // 단어 연습
	system("cls");
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav 노래 틀기
	int wordn,randomn,correct = 0,i; // wordn = 파일의 단어 개수, correct = 연습 중 맞은 개수, randomn = 무작위 난수, i = 반복문의 i
	double accuracy = 0; // 정확도
	FILE *wordinput = fopen("data/file/word_practice.dat", "rt"); // 읽기 모드로 파일 열기
	if (wordinput == NULL) error(); // 파일이 없다면 오류!
	fscanf(wordinput, "%d", &wordn); // 단어 개수 스캔 받고
	char word[3005][12],now[12]; // word = 파일에 저장된 모든 단어, now = 현재 입력해야 할 단어

	for(int i=0;i<wordn;i++){ // 단어의 개수 만큼
		fscanf(wordinput, "%s", word[i]); // 단어 흡수
	}

	fclose(wordinput); // 스트림 닫기

	time_t time_now = time(NULL); //시간 측정
		for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5); // 무작위 난수를 정한다.
		system("cls");
		printf("-------------------- 정확도 : %.1f%% ------------------- 진행률 : %d%% ------------------\n",accuracy,5 * (i-1)); // 출력 화면
		printf("\n\n                                      지금 치실 단어 \n");
		printf("\n\n------------------------------[                           ]------------------------------\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    지금 입력하신 단어\n");
		printf("\n\n------------------------------[                           ]------------------------------\n\n\n");
		gotoxy(40, 6);
		printf("%s",word[randomn]);
		gotoxy(40, 26);
		CursorView(1); // 커서 보이기
		scanf("%s",now); // 단어 입력
		CursorView(0); // 커서 숨기기
		if(!strcmp(now, word[randomn])) correct += 1; // 맞으면 correct 에 1추가
		accuracy = (double)((double)correct / (double)i) * 100; // 정확도 계산
	}
	time_now = time(NULL) - time_now; //시간 측정

	system("cls");
	gotoxy(0, 0);
	printf("                         ---   낱말 연습이 완료 되었습니다.   ---\n");
	printf("                              ---   정답의 개수 : %d개   ---\n", correct);
	printf("                                ---   정확도 : %.1f%%   ---\n", accuracy);
	printf("                              ---   지난 시간 : %lld초   ---\n", time_now);
	printf("                            6초 후 메뉴 선택화면으로 이동됩니다.\n ");
	Sleep(6000);

	if (i != 21) error(); // 반복문의 값이 20번 반복되지 않으면 오류!
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); //main_bgm1.wav 틀기
}

void short_sentence_practice() {
	system("cls");
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav 노래 틀기 
	int wordn = 1261, correct = 0, randomn,i; // wordn = 파일의 단어 개수, correct = 연습 중 맞은 개수, randomn = 무작위 난수, i = 반복문의 i
	double accuracy;
	char word[3005][100], now[100]; // word = 파일에 저장된 모든 문장, now = 현재 입력해야 할 문장
	FILE *sentenceinput = fopen("data/file/sentence_practice.dat", "rt"); // 일기 모드로 파일 열기
	
	if (sentenceinput == NULL) error(); // 파일이 없다면 오류 발생

	for (int i = 0; i < wordn; i++) { // 입력 받고
		fgets(word[i], sizeof(word[i]), sentenceinput);
	}
	fclose(sentenceinput); // 파일 입력 닫기


	accuracy = 0;
	time_t time_now = time(NULL); //시간 측정
	for (i = 1; i <= 10; i++) {
		randomn = random(wordn - 5); // 난수 설정
		system("cls");
		printf("-------------------- 정확도 : %.1f%% ------------------- 진행률 : %d%% ------------------\n", accuracy, 5 * (i - 1));
		printf("\n\n                               지금  입력하셔야 하실 문장\n");
		printf("\n\n-[                                                                                     ]-\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    지금 입력하신 문장\n");
		printf("\n\n-[                                                                                     ]-\n\n\n");
		gotoxy(12, 6);
		printf("%s", word[randomn]);
		gotoxy(12, 26);
		CursorView(1); // 커서 보이기
		fgets(now, sizeof(now), stdin); // 입력한 한줄을 완전히 받는다. (fgets : 한글 - 50자만 받도록 설정)
		CursorView(0); // 커서 숨기기
		if (!strcmp(now, word[randomn])) correct += 1; // 맞다면 correct 1 추가
		accuracy = (double)((double)correct / (double)i) * 100; // 정확도 계산
	}
	time_now = time(NULL) - time_now; //시간 측정
	system("cls");
	gotoxy(0, 0);
	printf("                         ---   문장 연습이 완료 되었습니다.   ---\n");
	printf("                              ---   정답의 개수 : %d개   ---\n", correct);
	printf("                                ---   정확도 : %.1f%%   ---\n", accuracy);
	printf("                              ---   지난 시간 : %lld초   ---\n", time_now);
	printf("                            6초 후 메뉴 선택화면으로 이동됩니다.\n ");
	Sleep(6000);
	if (i != 11) error(); // 반복을 10번 하지 않으면 오류!먀
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm1.wav 틀기
}

void Introduction_of_this_program() { // 프로그램 설명 
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav 틀기
	system("cls");
	printf("안녕하세요. 개발자 김건우입니다.\n");
	Sleep(700);
	printf("이 프로그램은 대전 정보영재 초급 개인주제 발표대회용 프로그램 입니다.\n");
	Sleep(700);
	printf("이 프로그램은 GNU General Public License v3.0 라는 라이센스가 해당됩니다.\n");
	Sleep(700);
	printf("이 프로그램의 사용법과 설명에 대한 더 자세한 정보를 알고 싶으시면 개발자 사이트로 오십시오\n");
	Sleep(700);
	printf("개발자 사이트 : kgw2007.cf\n");
	Sleep(700);
	printf("이 글은 15초 후에 지워지고 메인화면으로 이동합니다.\n");
	Sleep(15000);
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); // 설명후 main_bgm1.wav 틀기
}