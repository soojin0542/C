#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void main() {
	/*
	int a, b, i, j, n, x, macju, sum, add, su, num, cnt, ggd, star;
	
//60�ʺ��� 0�ʱ��� ���ڸ� ����ϰ� 0�ʰ� �Ǹ� �߻縦 ����Ѵ�.

	for (i = 60; i >= 0; i--) {
		printf("%d ", i);
		if (i == 0) {
			printf("�߻�\n\n");
		}
	}
*/

//�ݺ� Ƚ���� �Է¹޾� �׸�ŭ �ȳ��ϼ��並 ����ϴ� ���α׷��� ������
/*
	i = 0;
	printf("��� �Է��ұ��?\n");
	scanf("%d", &i);

	for (i; i > 0; i--) {
		printf("�ȳ��ϼ���?\n\n");
		
	}
*/

//99���� ���ָ� ����غ���

//99���� ���ְ� ���忡 �ֳ�, 99���� ���ֶ��
//�ϳ��� ������ �Ѱ��, 98���� ���ְ� ���忡 �ֳ� .....
//(�̰��� 1���� �ɶ����� �ݺ��Ѵ�)
//1���� ���ְ� ���忡 �ֳ�, 1���� ���ֶ��
//�װ��� ������ �Ѱ��, �� �̻� ���忡 ���ְ� ����
//�� �̻� ���忡 ���ְ� ����, ���ִ� �� �̻� ���ٳ�
/*
	for (macju = 99; macju > -2;) { 
		printf("%d���� ���ְ� ���忡 �ֳ�, %d���� ���ֶ��\n", macju, macju);
		macju -= 1;
		printf("�ϳ��� ������ �Ѱ��, %d���� ���ְ� ���忡 �ֳ�\n\n", macju);
		
		if (macju == 1) {
			printf("�װ��� ������ �Ѱ��, �� �̻� ���忡 ���ְ� ����\n\n");
			printf("�� �̻� ���忡 ���ְ� ����, ���ִ� �� �̻� ���ٳ�\n\n");
			break;	//break�� ������� ������ -1�� �߰��� ��µȴ�.
					//���̳ʽ��� ��µȴٸ� �ٽ� �غ���
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
	x = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", x);
			x++;
		}
		printf("\n");
	}
	printf("\n\n");

*/
/*
	i = 0;
	j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			printf(" "); 
		}
		for (j = 0; j < 1 + i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
*/
/*
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", arr[j]);
		}
		printf("\n");
	}
	printf("\n\n");
*/
/*
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
*/

//������ �Է¹޾� ��� ���ϴ� ���α׷��� ������
//0�� �Է��ϸ� ���ݱ��� �Էµ� ��� ���� �հ踦 ����ϰ� �����Ѵ�.
/*
	n = 0; sum = 0;
	while (1) {
		scanf("%d", &n);
		if (n == 0) 
			break;
		sum += n;
	}
	printf("%d", sum);
	printf("\n\n");
*/

/*
	a = 1;
	add = 0;
	su = 0;
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
	printf("\n\n");
*/

//1���� 100������ �ڿ��� �߿��� 3�� ����� ����غ���
/*
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d  ", i);
		}
	}
	printf("\n\n");
*/

//����� �̿��Ͽ� 369������ ������
//50�� �Ǹ� ���� ����ϸ� �����
/*
	i = 0;
	for (; ; i++) {
		if (i % 3 == 0) {
			printf("¦ ");
		}
		else {
			printf("%d ", i);
		}

		if (i == 50) {
			printf("��");
			break;
		}
	}
	printf("\n\n");
*/

//1���� 100������ �ڿ��� �߿��� 3�� 5�� ������� ����غ���
/*
	for (i = 0; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n\n");
*/

//�Է¹��� ���� �Ҽ����� �����ϴ� ���α׷�
//3�� �Ҽ���. �ֳ��ϸ� 3�� ����� 1�� 3�̱� �����̴�
/*
	num = 0; i = 0; cnt = 0;
	printf("���� �Է��ϼ���\n");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		//printf("%d �� %d = %d\n", num, i, num % i); <-Ȯ�ο�
		if (num % i == 0)
			cnt++;
	}

	if (cnt == 0) {
		printf("\n�Ҽ��Դϴ�"); printf("\n\n");
	}
	else {
		printf("\n�Ҽ��� �ƴմϴ�"); printf("\n\n");
		
	}
*/

//��ø �ݺ������� �������� ������
/*
	ggd = 0; i = 0;
	printf("����� �� �Է� : ");
	scanf("%d", &ggd); printf("\n\n");
	
	//����
	for (i = 1; i <= 10; i++) {
		printf("%d X %d = %d", ggd, i, ggd * i);  printf("\n");
	}
	printf("\n\n");
	//����
	for (i = 1; i <= 10; i++) {
		printf("%d X %d = %d  ", ggd, i, ggd * i);
	}
	printf("\n\n");
*/

	//1~9�ܱ��� ��ü ��� (���� for��)
/*
	a = 0; b = 0;
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 10; b++) {
			printf("%d X %d = %d", a, b, a * b); printf("\n");
		}
		printf("\n");
	}
	printf("\n\n");

	
	a = 1;
	while (a) {
		int star = 0;
		printf("�����͸� �Է��ϼ���(0�� �Է��ϸ� ����) : ");
		scanf("%d", &star);
		for (int i = 0; i < star; i++) {
			printf("*");
		}
		printf("\n");
		if (star == 0) {
			break;
		}
	}
*/
} // void main()