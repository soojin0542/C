#include <Windows.h>
#include <stdio.h>

int main() {
	/*
		����) �������� 3���� �Է¹ް� ����� 100~90 �̸� A , 89~80 �̸� B ,
		�� ���ϴ� "�����" ���
		����) ���࿡ A �� B ������ �ް� �����ڸ��� 7�̻��̸� ���� A+ , B+ ���
		��) 76 ==> ����� , 88 ==> B+ , 93 ==> A
	*/

	printf("���������� �Է��ϼ���. ����� �˷��帳�ϴ�. \n");

	int a;
	int b;
	int c;

	printf("���� :");
	scanf_s("%d", &a);

	printf("���� :");
	scanf_s("%d", &b);

	printf("���� :");
	scanf_s("%d", &c);

	int average = (a + b + c) / 3;
	int A = 100 >= average >= 90;
	int B = 89 >= average >= 80;

	if (A) {
		printf("A���");
	}
	else if (B) {
		printf("B���");
	}
	else if (average == 97) {
		printf("A+���");
	}
	else if (average == 87) {
		printf("B+���");
	}
	else {
		printf("�����");
	}
}