#include <Windows.h>
#include <stdio.h>
#include <time.h>

/*
int student(int* p1, int* p2) {
	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;
		printf("%d\n", r);

		if (r >= 60) {
			p1[0] += 1; // (*p1) += 1;
		}

		if (p2[0] < r) {
			p2[0] = r; // (*p2) += 1;
		}
	}
}

int main() {
	srand(time(NULL));

	// # �л� 10�� ������� 
	// ����1) �л� 10���� �������� ������ 0~100�� ����Ѵ�.
	// ����2) �հ��� �л� ���� ���(������ 60���̻�) 
	// ����3) 1�� ���� ���

	int count = 0;
	int max = 0;

	student(&count, &max);

	printf("�հ� �� : %d\n", count);
	printf("1������ : %d\n", max);
}
*/


int main() {
	srand(time(0));
	// # �л� 10�� ������� 
	// ����1) �л� 10���� �������� ������ 0~100�� ����Ѵ�.
	// ����2) �հ��� �л� ���� ���(������ 60���̻�) 
	// ����3) 1�� ���� ��� 
	int count = 0;
	int max = 0;

	int* cp = &count;
	int* mp = &max;

	for (int i = 0; i < 10; i++) {
		int r = rand() % 100 + 1;
		printf("%d\n", r);

		if (r >= 60) {
			count += 1;
		}

		if (max < r) {
			max = r;
		}
	}
	printf("\n");
	printf("�հ� �� : %d\n", count);
	printf("1������ : %d\n", max);
}
