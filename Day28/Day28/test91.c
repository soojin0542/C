#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	//���ٿ� ����
	srand(time(NULL));
	int a = rand() % 100 + 1;
	int scan = 0, count = 1;
	/*
	while (1) {
		printf("1~100 ���� ���� �Է��ϼ��� : ");
		scanf("%d", &scan);
		if (a < scan) {
			printf("�ٿ�\n\n");
		}
		if (a > scan) {
			printf("��\n\n");
		}
		if (a == scan) {
			printf("�����Դϴ�!\n�õ�Ƚ�� : %d\n�ý��� ����\n", count);
			break;
		}
		count++;
	}
	*/
	//�ϵ���
	count = 10; //���ϴ� Ƚ��
	while (1) {
		printf("[�ϵ��� | ���� Ƚ�� : %dȸ]\n", count);
		printf("1~100 ���� ���� �Է��ϼ��� : ");
		scanf("%d", &scan);

		if (a < scan) {
			printf("�ٿ�\n\n");
		}
		if (a > scan) {
			printf("��\n\n");
		}
		if (a == scan) {
			printf("�����Դϴ�!\n���� Ƚ�� : %d\n�ý��� ����\n", count-1);
			break;
		}
		if (count == 0) {
			printf("���� Ƚ���� ���� �����߽��ϴ�.");
		}
		count--;
	}
}

/*
void delay(clock_t n) {
	clock_t start = clock();
	while (clock() - start < n);
}

int main() {
	int a = rand() % 3;

	//����������
	while (1) {

	}
}
*/

/*
int main() {
	int a = rand() % 3;
	int arr[7] = { 0 };

	//�ζ�
	while (1) {

	}
} 
*/