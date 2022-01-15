#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

struct ATM {
	int accs;
	int count;
	int login;
	int moneys[3];
	int c[3];
};

void main() {
	struct ATM atm = { 0 };
	atm.c[0] = 1111;	atm.moneys[0] = 1000;
	atm.c[1] = 2222;	atm.moneys[1] = 2000;
	atm.c[2] = 3333;	atm.moneys[2] = 3000;

	int sel = 0;
	int a = 0;
	int check = -1;
	
	while (1) {
		printf("\n1.로그인\n");
		printf("2.로그아웃\n");
		printf("3.이체하기\n");
		printf("4.회원가입\n");
		printf("5.탈퇴하기\n");
		printf("6.종료하기\n");
		scanf("%d", &sel);

		if (sel == 1) {
			if (atm.login == -1) {
				printf("로그인 후 이용가능\n");
			}
			else {
				printf("로그인 할 계좌번호 입력\n");
				scanf("%d", &a);

				for (int i = 0; i < atm.count; i++) {
					if (atm.c[i] == a) {
						check = i;
						atm.login = a;
					}
					else {
						printf("잘못된 번호 입력\n");
						break;
					}
				}
			}
			
		}

		if (sel == 2) {
			if (atm.login == -1) {
				printf("로그인 후 이용가능\n");
			}
			atm.login = -1;
			printf("로그아웃 되었습니다.\n");
		}

		if (sel == 3) {
			if (atm.login == -1) {
				printf("로그인 후 이용가능\n");
			}

			int b = 0;
			int c = 0;
			printf("이체할 번호 입력\n");
			scanf("%d", &b);
			atm.c[b];

			if (b != a) {
				printf("이체할 금액 입력\n");
				scanf("%d", &c);
				if (atm.moneys[a] > c) {
					atm.moneys[b] = atm.moneys[b] + c;
					atm.moneys[c] = atm.moneys[c] - c;
				}
				else {
					printf("잔액이 부족합니다\n");
				}
			}
			printf("이체가 완료되었습니다\n");
		}

		if (sel == 4) {
			if (atm.login == -1) {
				printf("로그인 후 이용가능\n");
			}

			int d = 0;
			check = 1;
			printf("가입할 계좌번호를 입력하세요 : \n");
			scanf("%d", &d);
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i] == d) {
					check = -1;
				}
			}

			if (check == -1) {
				printf("계좌번호가 중복됩니다.\n");
			}
			else {
				atm.count += 1;
				atm.c[atm.count] = d;
				atm.moneys[atm.count] = 0;
				printf("회원가입을 축하합니다.\n");
			}
		} 

		if (sel == 5) {
			if (atm.login == -1) {
				printf("로그인 후 이용가능\n");
			}
			atm.count -= 1;
			atm.login = -1;
			printf("탈퇴되었습니다.\n");
		}

		if (sel == 6) {
			break;
		}
	} // while (1)
}
