#include <Windows.h>
#include <stdio.h>

int main() {

	// ���� ���� �� ���� �����
	// 1.���� 2.���� 3.�� 
	// p1, p2 �� ���� ���� ���� �Ѵ�. ��� ��� 


	int p1; int p2;
	int ���� = 1;
	int ���� = 2;
	int   �� = 3;

	printf("p1�� ����(�����Է�) 1)���� 2)���� 3)�� "); printf("\n");
	scanf_s("%d", &p1);

	printf("p2�� ����(�����Է�) 1.���� 2.���� 3.�� "); printf("\n");
	scanf_s("%d", &p2);

	if (p1 == p2) {
		printf("����.");
	}


	if (p1 == ���� && p2 == ��) {
		printf("p1 ��");
	}

	if (p1 == ���� && p2 == ����) {
		printf("p1 ��");
	}

	if (p1 == �� && p2 == ����) {
		printf("p1 ��");
	}



	if (p1 == �� && p2 == ����) {
		printf("p2 ��");
	}

	if (p1 == ���� && p2 == ����) {
		printf("p2 ��");
	}

	if (p1 == ���� && p2 == ��) {
		printf("p2 ��");
	}

}