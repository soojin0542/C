#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void student(int* p1, int* p2) {
	// # �л� 10�� �������
	
	srand(time(0));

	// ����1) �л� 10���� �������� ������ 0~100�� ����Ѵ�.
	for (int i = 0; i < 10; i++) {
		int a = rand() % 100 + 1;
		printf("%d", a); printf("\n");
		
		// ����2) �հ��� �л� ���� ���(������ 60���̻�) 
		if (a >= 60) {
			p1[0] += 1;
			//p1 == count
		}

		// ����3) 1�� ���� ���
		if (p2[0] < a) {
			p2[0] = a;
			//p2 == max
		}
	} //for
}

void main() {
	int count = 0;
	int max = 0;

	student(&count, &max);

	printf("�հ� �� : %d\n", count);
	printf("1������ : %d\n", max);
}