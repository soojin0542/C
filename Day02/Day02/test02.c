#include <Windows.h>
#include <stdio.h>

/*
	# �Է¹ޱ�
	. scanf_s(1, 2);
	. 1��(data type) : %d, %f, %s, %c ����� ����� �� �ִ�.
	. 2��(������ ����) : [����]���� �տ� &(���ۻ���)�� �ٿ�����Ѵ�.
*/


//test
/*void main() {

	printf("����\n"); printf("\n");
	int a;
	scanf_s("%d", &a); // ���ڸ� �Է��ϰ� ���͸� ���������� ����Ѵ�.
	printf("����\n"); printf("\n");

	printf("%d", a); printf("\n");

}

*/


//�Է¹ޱ�[����]
void main() {

	// ����1) ���� 1���� �Է¹ް� ������� (����10%����)
/*
	float salary; float year;

	printf("���󿬺� ���ϱ�(������ �Է����ּ���)"); printf("\n");
	int a;
	scanf_s("%f", &salary);
	printf("����\n"); printf("\n");
	year = salary * 12 * 0.9;
	printf("%f", year); printf("\n");

*/


// ����2) ���� 2���� �Է¹ް� �ﰢ�� �������
/*
	float num1;
	float num2;
	float total;

	printf("�ﰢ�� �غ�"); printf("\n");
	scanf_s("%f", &num1); 
	printf("�ﰢ�� ����"); printf("\n");
	scanf_s("%f", &num2);

	total = num1 * num2 / 2;
	printf("%f", total); printf("\n");

*/


// ����3) ���� 2���� �Է¹ް� ���� ��ȯ 

	int num3;
	int num4;

	printf("���� 1 �Է�"); printf("\n");
	scanf_s("%d", &num3);
	printf("���� 2 �Է�"); printf("\n");
	scanf_s("%d", &num4);
	printf("%d, %d", num4, num3);


}