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
	burger.prices[0] = 8700; //����
	burger.prices[1] = 4200; //�ݶ�
	burger.prices[2] = 1500; //��Ƣ

	for (int i = 0; i < burger.count; i++) {
		burger.counts[i] = 0;
	}


	while (1) {
		int sel = 0;
		int cancel= 0;
		int my_money = 0;
		int sum = 0;

		printf("=== ���Ǳ� ===\n");
		printf("1.����\n");
		printf("2.�ݶ�\n");
		printf("3.����Ƣ��\n");
		printf("4.����\n");
		printf("5.�ֹ� ���\n");
		scanf_s("%d", &sel);

		switch (sel) {
		case 1:
			 printf("\n���Ÿ� �����ϼ̽��ϴ�");
			printf("\n�����ݾ׿� %d�� �߰�\n\n", burger.prices[0]);
			sum = sum + burger.prices[0];
			break;
		case 2:
			printf("\n�ݶ� �����ϼ̽��ϴ�");
			printf("\n�����ݾ׿� %d�� �߰�\n\n", burger.prices[1]);
			sum = sum + burger.prices[1];
			break;
		case 3:
			printf("\n����Ƣ���� �����ϼ̽��ϴ�");
			printf("\n�����ݾ׿� %d�� �߰�\n\n", burger.prices[2]);
			sum = sum + burger.prices[2];
			break;
		case 4:
			printf("\n������ �����ϰڽ��ϴ�");
			printf("\n�� �ݾ� : %d��", sum);
			break;
		case 5:
			printf("\n������ �ֹ��� ����Ͻðڽ��ϱ�?");
			printf("\n1.�� 2.�ƴϿ�");
			scanf_s("%d", &cancel);
			break;
		default:
			printf("�߸� �����ϼ̽��ϴ�.\n");
			printf("\n1, 2, 3���߿��� �����ϼ���\n\n");
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