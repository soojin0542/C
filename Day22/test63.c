#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

void grade(int* p1, double * p2) {

	//�л� 5���� ������ ���������� �迭�� ����
	//���� ���
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		int a = rand() % 100 + 1;
		printf("%d", a); printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {
		p1[0] = p1[0] + a[i];
	}
}


int main() {
	int a1 = 0; double a2 = 0;
	int b = 0;
	grade(&a1, &a2);
	a2 = a1 / 5;
	
	printf("���� : %d", a1); printf("\n");
	printf("������� : %f", a2);
}