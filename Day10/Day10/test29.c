#include <stdio.h>
#include <Windows.h>

int main() {
	// �ý� ����
	// 1.���� ==> �������� �ӵ���ŭ �̵� 
	// 2.ȸ�� ==> �� �� �� ��  ==> 0 , 1 , 2 , 3
	// 3.�ӵ� ==> 0~3 ���̷� �̵� 

	int money = 1000;
	int x = 5; int y = 5;
	int speed = 0;
	int dir = 0;
	int dx = 7;
	int dy = 1;
	int run = 1;

	while (run == 1) {
		system("cls"); // ȭ��Ŭ����
		printf("[����] %d", money);					 printf("\n");
		printf("[����ġ] x : %d, y : %d", x, y);		 printf("\n");
		printf("[�ӵ�] %d, [����] %d ", speed, dir);  printf("\n");
		printf("[������] dx : %d, dy : %d", dx, dy);  printf("\n");
		printf("1.���� 2.ȸ�� 3.�ӵ����� \n");

		int sel; scanf_s("%d", &sel);
		if (sel == 1) {
			printf("0) �� , 1) �� , 2)�� , 3)�� \n");
			scanf_s("%d", &dir);
		}
		else if (sel == 3) {
			printf("�ӵ��� �Է��ϼ��� (0~3)");
			scanf_s("%d", &speed);
		}
	}
}