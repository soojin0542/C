#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//은행 함수

int money = 0; 
// 전역변수
// 전역변수와 지역변수의 이름이 같으면 지역변수가 쓰인다

int plus(int plus_money) {
	printf("입금 금액을 입력하세요\n");
	scanf("%d", &plus_money); printf("\n");
	money = money + plus_money;
	return plus_money;
}

int minus(int minus_money) {
	printf("출금 금액을 입력하세요\n");
	scanf("%d", &minus_money); printf("\n");
	if (money <= minus_money) {
		printf("잔액이 너무 적습니다\n"); printf("\n");
		minus_money = 0;
	}
	money = money - minus_money;
	return minus_money;
}


int main() {
	char a = 0;
	int sel = 0;
	int start = 0;
	int plus_money, minus_money, program;
	
	while (1) {
		printf("==== 메뉴를 선택하세요 ====\n");
		printf("<1> 잔고 확인\n<2> 입금\n<3> 출금\n<4> 종료\n");
		printf("===========================\n");
		scanf("%d", &sel);

		
		if (sel == 1) {
			printf("잔액이 %d 원 남았습니다.\n\n", money);
		}
		else if (sel == 2) {
			plus_money = plus(0);
		}
		else if (sel == 3) {
			minus_money = minus(0);
		}
		else if (sel == 4) {
			//program = exit(0);
			printf("종료하시겠습니까? (y n) : ");
			scanf(" %c", &a); printf("\n");
			if (a == 'y') {
				break;
			}
			else {
				continue;
			}
			return a;
		}
		else {
			printf("없는 메뉴입니다");
			break;
		}
	}
}