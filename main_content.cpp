#include "main_headfile.h" //  헤더파일 선언문 헤더 파일
#include "main_function.h" //  함수 선언문 헤더 파일

// 메인화면 처리를 담당하는 함수가 여기에 있습니다.
int select_main() {
	int loc = 1;
	main_print(1);
	while (1) {
		int key_input = keyboard_input(); // 키보드 입력 값을 받는다.
		 
		if (key_input == 6) { // 메뉴의 위치를  선택한다..
			if (loc == 3) loc = 1;
			else loc++;
		}
		else if (key_input == 4) {
			if (loc == 1) loc = 3;
			else loc--;
		}
		else if (key_input == 0) {
			switch (loc) {
				case 1:
					word_practice();
					break;
				case 2:
					short_sentence_practice();
					break;
				case 3:
					Introduction_of_this_program();
					break;
				default:
					error();
			}
		}
		main_print(loc);
		Sleep(500);
	}
	
}

void word_practice() {
	system("cls");
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
	int wordn,correct = 0;
	double accuracy;
	FILE *wordinput = fopen("word_practice.dat", "rt");
	fscanf(wordinput, "%d", &wordn);
	char word[3005][12],now[12];

	for(int i=0;i<wordn;i++){
		fscanf(wordinput, "%s", word[i]);
	}

	fclose(wordinput);
	int randomn = random(wordn - 5);
	int length_word;
	int length_total = 0;
	double time_total = 0;
	int i;

	accuracy = 0;
	time_t time_now = time(NULL); //시간 측정
	CursorView(1);
		for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5);
		length_word = strlen(word[randomn]) / 2;
		length_total += length_word;
		system("cls");
		printf("-------------------- 정확도 : %.1f%% ------------------- 진행률 : %d%% ------------------\n",accuracy,5 * (i-1));
		printf("\n\n                                      지금 치실 단어 \n");
		printf("\n\n------------------------------[                           ]------------------------------\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    지금 입력하신 단어\n");
		printf("\n\n------------------------------[                           ]------------------------------\n\n\n");
		gotoxy(40, 6);
		printf("%s",word[randomn]);
		gotoxy(40, 26);
		CursorView(1);
		scanf("%s",now);
		CursorView(0);
		if(!strcmp(now, word[randomn])) correct += 1;
		accuracy = (double)((double)correct / (double)i) * 100;
	}
	CursorView(0);
	time_now = time(NULL) - time_now; //시간 측정
	system("cls");
	gotoxy(0, 0);
	printf("                         ---   낱말 연습이 완료 되었습니다.   ---\n");
	printf("                              ---   정답의 개수 : %d개   ---\n", correct);
	printf("                                ---   정확도 : %.1f%%   ---\n", accuracy);
	printf("                              ---   지난 시간 : %lld초   ---\n", time_now);
	printf("                            6초 후 메뉴 선택화면으로 이동됩니다.\n ");
	Sleep(6000);
	if (i != 21) error();
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void short_sentence_practice() {
	system("cls");
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
	int wordn = 1261, correct = 0;
	double accuracy;
	char word[3005][100], now[100];
	FILE *sentenceinput = fopen("sentence_practice.dat", "rt");
	for (int i = 0; i < wordn; i++) {
		fgets(word[i], sizeof(word[i]), sentenceinput);
	}
	fclose(sentenceinput);

	int randomn = random(wordn - 5);
	double time_total = 0;
	int i;

	accuracy = 0;
	time_t time_now = time(NULL); //시간 측정
	CursorView(1);
	for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5);
		system("cls");
		printf("-------------------- 정확도 : %.1f%% ------------------- 진행률 : %d%% ------------------\n", accuracy, 5 * (i - 1));
		printf("\n                               지금  입력하셔야 하실 문장\n");
		printf("-[                                                                                     ]-\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n                                    지금 입력하신 문장\n");
		printf("-[                                                                                     ]-\n");
		gotoxy(12, 3);
		printf("%s", word[randomn]);
		gotoxy(12, 29);
		CursorView(1);
		fgets(now, sizeof(now), stdin);
		CursorView(0);
		if (!strcmp(now, word[randomn])) correct += 1;
		accuracy = (double)((double)correct / (double)i) * 100;
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
	if (i != 21) error();
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Introduction_of_this_program() {
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
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
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}