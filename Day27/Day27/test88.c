#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main() {
	/*
	//2���� �迭 �⺻
	int a[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d] ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	*/

	/*
	//n���� �������� �޾� �迭�� �����ϰ� �������� ���
	int arr[100];
	int count = 0;
	int change = 0;
	int b = 0;
	printf("�Է��� ������ ����:");
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("%d��° ��Ҹ� �Է��ϼ���:", i);
		scanf("%d", &change);
		arr[i] = change;
	}
	int j = count - 1;


	for (j; j >= 0; j--) { //�ݴ�� ����
		printf("[%d] ", arr[j]);
	}
	printf("\n");

	for (int i = 0; i < count; i++) { //�迭�� �ִ� ��� ���� ���ؼ� ���
		b = b + arr[i];
	}
	printf("%d", b);
	printf("\n\n");
	*/

	/*
	int student[3][3] = {
	{30, 10, 11},
	{40, 90, 32}, 
	{70, 65, 56} };

	for (int i = 0; i < 3; i++) {
		printf("%d�� �л� ��� : %d\n\n", i+1 , (student[i][0] + student[i][1] + student[i][2]) / 3);
	}
	*/

	
	//
	srand(time(NULL));
	int a[10] = { 0 };
	int b = 0;
	int c = 0;
	int d = 0;

	while (b<100) {
		a[rand() % 10] += 1;
		b++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (c < a[i]) { //a�� i��° �ε����� ����� ������
						//����(c)�� ����� ���� �� ���ٸ�
			c = a[i];	//c�� ����
			d = i;
		}
	}
	printf("���� ���� ������ �� : %d (%d��)", d, c);

	/*
	//�ֻ����� 60000�� ������ ����� ���()
	srand(time(NULL));
	int a[7] = { 0 };
	for (int i = 1; i <= 60000; i++) {
		a[rand() % 6 + 1]++; // 1~6
	}

	printf("================================\n");
	printf("�ֻ�����	��\n");
	printf("================================\n");
	for (int i = 0; i < 6; i++){
		printf("  %d		%d\n", i + 1, a[i + 1]);
	}	
	*/

	/*
	//���� ����� ���� for���� ������ ������
	//���� abort() ���׳�
	for (;;) {
		printf("�ȳ�");
		1. break;	//������ Ż��
		2. exit(0);	//���� c ���α׷��� ���� �����ϴ� ���
					//�ַ� ������ ������ �������Ḧ ��Ű�� ���� ����
					//��� ������ ���ϵ��� �ڵ����� �ݴ´�.
		3. abort();
	}
	*/
}