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
	char str[100]; int i;
	printf("�ؽ�Ʈ�� �Է��ϼ��� : ");
	scanf("%s", &str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' &&
			str[i+1] == ' ') {
			continue;
		}
		printf("%c", str[i]);
	}
	*/
	int intezer = 0;
	int arr[100] = { 0 };
	printf("�Է��� ������ ���� �Է�(�ִ� 100) : ");
	scanf("%d", &intezer);

	for (int i = 0; i < intezer; i++, intezer++) {
		int a = 0;
		int b = 0;
		printf("%d��° ��Ҹ� �Է��ϼ��� : ", i);
		scanf("%d", &a);
		arr[intezer] = a;
	}
	
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

	/*
	//�������� 0~9 ������ ���� 100�� ���� ��
	srand(time(NULL));
	int a[10] = { 0 };
	int b = 0;
	int max = 0;
	int max_su = 0;

	while (b<100) {
		a[rand() % 10] += 1;
		b++;
	}
	//���� ���� ���� ���ڿ� ��� ���Դ��� ���
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) { //a�� i��° �ε����� ����� ������
						//����(c)�� ����� ���� �� ���ٸ�
			max = a[i];	//c�� ����
			max_su = i;
		}
	}
	printf("���� ���� ������ �� : %d (%d��)", max_su, max);
	*/

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

	/*
	
	for (;;) {
		
	}
	��
	while (1) {
		
	}
	�� ����

	*/
}