#include <Windows.h>
#include <stdio.h>

void print_menu(int* prices) {
	printf("\n\n=== �Ե����� ===\n");
	printf("1.[��Ʈ]�Ұ����� : %d��\n", prices[0]);
	printf("2.[��ǰ]�Ұ����� : %d��\n", prices[1]);
	printf("3.�ݶ� : %d��\n", prices[2]);
	printf("4.�����ϱ�\n");
}

int sel_menu(int count) {
	int choice = 0;
	printf("�޴� ���� : ");
	scanf_s("%d", &choice);

	if (4 < choice || choice < 1) {
		choice = -1;
	}
	return choice;
}

void choice1(int* counts) {
	counts[0] += 1;
}

void choice2(int* counts) {
	counts[1] += 1;
}

void choice3(int* counts) {
	counts[2] += 1;
}

int choice4(int* prices, int* counts, int count, int money) {
	int total = prices[0] * counts[0]
		+ prices[1] * counts[1] + prices[2] * counts[2];
	int charge = money - total;
	if (charge >= 0) {
		printf("\n\n=== ������ ===\n");
		printf("1.[��Ʈ]�Ұ����� : %d��\n", counts[0]);
		printf("2.[��ǰ]�Ұ����� : %d��\n", counts[1]);
		printf("3.�ݶ� : %d��\n", counts[2]);
		printf("�ѱݾ� : %d��\n\n", total);
		printf("�ܵ��� %d�� �Դϴ�.\n", charge);
	}
	else {
		printf("������ �����մϴ�.\n");
	}
	return charge;
}

int run(int* prices, int* counts, int count, int money) {
	while (1) {
		print_menu(prices);
		int choice = sel_menu(count);
		if (choice == -1) {
			printf("�Է¿���\n");
			continue;
		}
		if (choice == 1) {
			choice1(&counts[0]);
		}
		else if (choice == 2) {
			choice2(&counts[0]);
		}
		else if (choice == 3) {
			choice3(&counts[0]);
		}
		else if (choice == 4) {
			money = choice4(prices, counts, count, money);
			break;
		}
	}
	return money;
}

void main() {

	// # ������ ����ϱ�[�Լ��� ����]

	int count = 3;
	int counts[3] = { 0 };
	int prices[3] = { 8700, 4200, 1500 };

	int money = 20000;

	money = run(&prices[0], &counts[0], count, money);

	system("pause");
}