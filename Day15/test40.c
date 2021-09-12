#include <Windows.h>
#include <stdio.h> 

/*
	# ATM
	[1] 로그인
		. 계좌번호와 비밀번호를 입력받아 로그인 처리
		. 로그인 후, 재 로그인 불가
	[2] 이체
		. 로그인 후, 이용가능
	[3] 로그아웃
		. 로그인 후, 이용가능
*/

int main() {

	int account[4] = { 1111, 2222, 3333, 4444 };
	int password[4] = { 1234, 2345, 3456,4567 };
	int balance[4] = { 5000, 6000, 7000, 8000 };

	int money1 = 10000;
	int login = -1;
	int run = 1;

	while (run == 1) {
		printf("1. 로그인\n");
		printf("2. 이체\n");
		printf("3. 로그아웃\n");
		printf("4. 시스템 종료\n");

		printf("메뉴를 선택하세요 : \n\n");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (login == -1) {
				printf("계좌번호를 입력해주세요 : ");
				int my_acc = 0;
				scanf_s("%d", &my_acc);

				printf("비밀번호를 입력해주세요 : ");
				int my_pw = 0;
				scanf_s("%d", &my_pw);

				for (int i = 0; i < 4; i++) {
					if (my_acc == account[i] && my_pw == password[i]) {
						login = i;
					}
				}

				if (login == -1) {
					printf("계좌번호를 확인해주세요.\n\n");
				}
				else {
					printf("[메세지]%d님, 환영합니다.\n", account[login]);
				}
			}

			else {
				printf("[메세지]로그아웃 후 이용해주세요.\n\n");
			}
		}

		else if (sel == 2) {
			if (login != -1) {
				printf("잔액 : %d원\n", money1);
				printf("[이체]계좌번호를 입력하세요 : ");
				int acc = 0;
				scanf_s("%d", &acc);

				int index = -1;
				for (int i = 0; i < 4; i++) {
					if (account[i] == acc) {
						index = i;
					}
				}
				if (index == -1) {
					printf("계좌번호를 확인해주세요.\n");
				}
				else {
					printf("이체금액을 입력하세요 : ");
					int money = 0;
					scanf_s("%d", &money);

					if (money <= balance[login]) {
						balance[login] -= money1;
						balance[index] += money1;
						printf("이체를 완료하였습니다.\n");
						printf("이체금액 : %d원\n\n", money1 - money);
					}
					else {
						printf("잔액이 부족합니다.\n\n");
					}
				}
			}
			else {
				printf("[메세지]로그인 후 이용가능합니다.\n\n");
			}
		}

		else if (sel == 3) {
			if (login != -1) {
				login = -1;
				printf("[메세지]로그아웃 되었습니다.\n\n");
			}
			else {
				printf("[메세지]로그인 후 이용가능합니다.\n\n");
			}
		}

		else if (sel == 4) {
			run = 0;
		}
	}
}