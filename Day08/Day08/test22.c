#include <Windows.h>
#include <stdio.h>

int main() {
	// ATM 기능 만들기

	// 1. 로그인 ==> 로그인시 log 에 해당 아이디 저장 
	// 2. 로그아웃 ==> log = -1;
	// 3. 잔액조회 ==> 로그인한사람만 조회가능

	int db_id1 = 1111; int db_id2 = 2222;
	int db_m1 = 1000; int db_m2 = 2000;
	int log = -1;
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("로그인하세요. \n");
		}
		else {
			printf("[%d] 로그인중...", log); printf("\n");
		}

		printf("====== mega atm ======= \n");
		printf("1.로그인 2.로그아웃 3.잔액조회 \n");
		printf("\n");

		int sel; scanf_s("%d", &sel);
		if (sel == 1) {
			printf("아이디를 입력하세요.");

			int id; scanf_s("%d", &id);
			if (id == db_id1) {
				log = db_id1;
			}
			else if (id == db_id2) {
				log = db_id2;
			}
			else {
				log = -1;
			}

		}
		else if (sel == 2) {
			log = -1;
		}
		else if (sel == 3) {

		}
	}
}