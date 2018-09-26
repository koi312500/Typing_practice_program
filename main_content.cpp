#include "main_header.h"

int select_main() {
	int loc = 1;
	main_print(1);
	while (1) {
		int key_input = keyboard_input();
		
		if (key_input == 6) {
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

			}
		}
		main_print(loc);
		Sleep(500);
	}
	
}

void word_practice() {

}