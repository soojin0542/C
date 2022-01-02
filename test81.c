#include <Windows.h>
#include <stdio.h>

struct Store {
	int count;
	int money;
	int counts[3];
	int prices[3];
};

void main() {
	struct Store burger = { 0 };
	burger.money = 20000;
	burger.count = 3;
	burger.prices[0] = 8700; //버거
	burger.prices[1] = 4200; //콜라
	burger.prices[2] = 1500; //감튀

	for (int i = 0; i < burger.count; i++) {
		burger.counts[i] = 0;
	}


	while (1) {
		int sel = 0;
		int cancel= 0;
		int my_money = 0;
		int sum = 0;

		printf("=== 자판기 ===\n");
		printf("1.버거\n");
		printf("2.콜라\n");
		printf("3.감자튀김\n");
		printf("4.결제\n");
		printf("5.주문 쥐소\n");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			 printf("\n버거를 선택하셨습니다");
			printf("\n결제금액에 %d원 추가\n\n", burger.prices[0]);
			sum = sum + burger.prices[0];
			break;
		case 2:
			printf("\n콜라를 선택하셨습니다");
			printf("\n결제금액에 %d원 추가\n\n", burger.prices[1]);
			sum = sum + burger.prices[1];
			break;
		case 3:
			printf("\n감자튀김을 선택하셨습니다");
			printf("\n결제금액에 %d원 추가\n\n", burger.prices[2]);
			sum = sum + burger.prices[2];
			break;
		case 4:
			printf("\n결제를 시작하겠습니다");
			printf("\n총 금액 : %d원", sum);
			break;
		case 5:
			printf("\n정말로 주문을 취소하시겠습니까?");
			printf("\n1.네 2.아니오");
			scanf_s("%d", &cancel);
			break;
		default:
			printf("잘못 선택하셨습니다.\n");
			printf("\n1, 2, 3번중에서 선택하세요\n\n");
			break;
		}


		if (sel == 4) {
			break;
		}
		if (sel==5 && cancel == 1) {
			break;
		}
		else if (sel == 5 && cancel == 2) {
			continue;
		}
	} // while (1)
}