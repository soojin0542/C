#include <Windows.h>
#include <stdio.h>

int main() {
	int db_id1 = 1111; int db_id2 = 2222;
	int db_m1 = 1000; int db_m2 = 2000;
	int log = -1; //로그아웃은 -1 // 로그인은 해당 아이디 //
	int run = 1;
	int n;

	while (run == 1) {
		if (log == -1) {
			printf("로그인하세요");
		}
		else {
			printf("[%d] 로그인중...", log); printf("\n");
		}

		printf("====== mega atm ======= \n");
		printf("1.로그인 2.종료 \n");
		int sel; scanf_s("%d", &sel);

		if (sel == 1) {
			printf("아이디를 입력하세요 \n");
			int id; scanf_s("%d", &id);
			if (id == db_id1) {
				log = id;
			}
			if (id == db_id2) {
				log = id;
			}



			while (log != -1) {
				printf("====== %d =======", log); printf("\n");
				printf("3.잔액조회 4.출금 5.입금 0.로그아웃 \n");
				int sell; scanf_s("%d", &sell);

				if (sell == 0) {
					log = -1;
				}

				if (sell == 3) {
					if (log == db_id1) {
						printf("%d원 남았습니다.", db_m1); printf("\n");
					}
					else if (log == db_id2) {
						printf("%d원 남았습니다.", db_m2); printf("\n");
					}
				}

				if (sell == 4) {
					if (log == db_id1) {
						printf("잔액:%d", db_m1); printf("\n");
						printf("출금할 금액을 입력하세요. \n");
						scanf_s("%d", &n);

						if (db_m1 <= n) {
							printf("잔액이 부족합니다 \n");

						}
						else {
							printf("잔액:%d \n", db_m1 - n);
							db_m1 = db_m1 - n;
						}
					}

					else if (log == db_id2) {
						printf("잔액:%d", db_m2); printf("\n");
						printf("출금할 금액을 입력하세요. \n");
						scanf_s("%d", &n);

						if (db_m2 <= n) {
							printf("잔액이 부족합니다 \n");

						}
						else {
							printf("잔액:%d \n", db_m2 - n);
							db_m2 = db_m2 - n;
						}
					}
				}
			}
		}
		if (sel == 2) {
			run = 0;
		}
	}
}