#include <Windows.h>
#include <stdio.h>


// ����[����]

void main() {


// ����1) �簢�� ���� ���
/*
	float garo;
	garo = 7;

	float sero;
	sero = 3;

	float rect;
	rect = garo * sero;

	printf("%f, %f, %f", garo, sero, rect)
*/



// ����2) ���������� 20, 43, 71���� �޾Ҵ�. ���� ��� ���.
/*
	float score1; float score2; float score3; float total; float avg;
	score1 = 20;
	score2 = 43;
	score3 = 71;

		total = score1 + score2 + score3;
	avg = total / 3;

	printf("���� : %f��, ���� : %f��, ���� : %f��, ��� : %f��", score1, score2, score3, avg);
*/



// ����3) 186800���� ȭ��ż��� ���
/*
	// ����3) 5����(3��) 1����(3��) 5õ��(1��) 5���(1��) 1���(3��)
	int money = 186800;

	int n1 = money / 50000;
	int n2 = (money % 50000) / 10000;
	int n3 = (money % 10000) / 5000;
	int n4 = (money % 5000) / 1000;
	int n5 = (money % 1000) / 500;
	int n6 = (money % 500) / 100;

	printf("5���� = %d��\n", n1);
	printf("1���� = %d��\n", n2);
	printf("5õ�� = %d��\n", n3);
	printf("õ�� = %d��\n", n4);
	printf("5��� = %d��\n", n5);
	printf("��� = %d��\n", n6);
*/



// ����4) x�� y�� �� ��ȯ.
/*
	int x;
	int y;
	int z; //��Ʈ

	x = 10;
	y = 20;

	z = x;
	x = y;
	y = z;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
*/



// ����5) ������ 100���̴�. �������(���� : ���� 10%����)
/*
	float salary; float month; float tax; float total;
	salary = 100;
	month = 12;
	tax = 10;
	total = 1200 * 0.9;

		printf("���� : %f, ���� : %f", salary, total);
*/


}