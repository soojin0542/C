#include <Windows.h>
#include <stdio.h>


	void print_menu() {
		printf("=== 영화관 좌석예매 ===\n");
		printf("1.예매하기\n");
		printf("2.종료하기\n");
	}


	int menu() {
		int choice = 0;
		printf("메뉴 선택 : ");
		scanf_s("%d", &choice);

		if(2 < choice || choice < 0) {
			printf("입력오류\n");
		}
		return choice;
	}


	void print_seat(int* p, int count) {

	}


	int sel_seat(int* p, int count) {
		int idx = 0;
		printf("좌석선택 (1~5) : ");
		scanf_s("%d", &idx);
		idx -= 1;

		int check = idx;
	}


	void run(int* p, int count) {
		while (1) {
			print_menu();

			int choice = menu();
			if (choice == 1) {
				print_seat(p, count);
				int idx = sel_seat(p, count);
			
				if (idx == -1) {
					printf("입력오류\n");
					continue;
				}

				if (p[idx] == 0) {
					p[idx] = 1;
				}
				else if (p[idx] == 1) {
					printf("해당 위치는 예매할 수 없습니다.\n");
				}
				else {
					printf("입력오류\n");
				}
			} //if (choice == 1)


			if (choice == 2) {
				break;
			}
		} //while (1)
	}


	void main() {
		int count = 5;
		int seat[5] = { 0 };
		run(&seat[0], count);

		for (int a = 0; a < 5; a++) {
			printf("%d", seat[a]);
		}

	}