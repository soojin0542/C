#include <Windows.h>
#include <stdio.h>

int main() {
	// ����1) ���� 1���� �Է¹ް� ������� (����10%����)
/*
	float salary;
	printf("����1)������±�(������ �Է��ϼ���)"); printf("\n");
	scanf_s("%f", &salary);
	printf("%f", salary * 12 * 0.9);
*/

	// ����2) ���� 2���� �Է¹ް� �ﰢ�� �������

	float num1;
	float num2;
	float total;

	printf("����2)�ﰢ�� ���� ���ϱ�"); printf("\n");
	printf("�ﰢ���� �غ��� �Է��ϼ��� : ");
	scanf_s("%f", &num1);
	printf("�ﰢ���� ���̸� �Է��ϼ��� : ");
	scanf_s("%f", &num2);

	printf("�غ� : %f, \n", num1);
	printf("���� : %f, \n", num2);

	total = num1 * num2 / 2;

	printf("�ﰢ���� ���� : %f", total);


// ����3) ���� 2���� �Է¹ް� ���� ��ȯ 
/*
	int num3;
	int num4;
	printf("����3) ���� 2���� �Է¹ް� ���� ��ȯ"); printf("\n");

	scanf_s("%d", &num3);
	scanf_s("%d", &num4);

	printf("%d, %d", num4, num3);
*/

}