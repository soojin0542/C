#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

/*
//60�ʺ��� 0�ʱ��� ���ڸ� ����ϰ� 0�ʰ� �Ǹ� �߻縦 ����Ѵ�.
void main() {
	for (int i = 60; i >= 0; i--) {
		printf("%d ", i);
		if (i == 0) {
			printf("�߻�");
		}
	}
}

//�ݺ� Ƚ���� �Է¹޾� �׸�ŭ �ȳ��ϼ��並 ����ϴ� ���α׷��� ������
void main() {
	int i = 0;
	printf("��� �ݺ��ұ��? : ");
	scanf("%d", &i);

	for (i; i > 0; i--) {
		printf("�ȳ��ϼ���?\n");
		
	}
}
*/

//1******
//12*****
//123****
//1234***
//12345**
//123456*
//1234567
//�� ����ϴ� ���α׷��� ������

/*
void main() {
	int x = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", x);
			x++;
		}
		printf("\n");
	}
}


void main() {
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			printf(" "); 
		}
		for (j = 0; j < 1 + i; j++) {
			printf("*");
		}
		printf("\n");
	}
}


void main() {
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", arr[j]);
		}
		printf("\n");
	}
}


void main() {
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
*/


//������ �Է¹޾� ��� ���ϴ� ���α׷��� ������
//0�� �Է��ϸ� ���ݱ��� �Էµ� ��� ���� �հ踦 ����ϰ� �����Ѵ�.
/*void main() {
	int n;
	int sum = 0;
	while (1) {
		scanf("%d", &n);
		if (n == 0) 
			break;
		sum += n;
	}
	printf("%d", sum);
	
	/*int a = 1;
	int add = 0;
	int su = 0;

	while (a) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &add);
		if (add == 0) {
			break;
		}
		printf("\n");

		su = su + add;
		add = 0;
	}
	printf("�հ�=%d", su);
}
*/


//1���� 100������ �ڿ��� �߿��� 3�� ����� ����غ���

//1���� 100������ �ڿ��� �߿��� 3�� 5�� ������� ����غ���

//�Է¹��� ���� �Ҽ����� �����ϴ� ���α׷�
//3�� �Ҽ���. �ֳ��ϸ� 3�� ����� 1�� 3�̱� �����̴�

//��ø �ݺ������� �������� ������