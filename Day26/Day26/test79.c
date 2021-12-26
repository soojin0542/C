#include <Windows.h>
#include <stdio.h>
#include <time.h>

/*
	# OMRī��[����ü(����) ����]

	��)
	omr = [1, 3, 4, 2, 5]
	hgd = [1, 1, 4, 2, 3]

	���� 1) 1~5 ������ ���� ���� 5�� ����
	���� 1) [1, 1, 4, 2, 3]

	���� 2) omr�� hgd�� ���� ������ 1,
	������ 0���� �迭�� ������ ���
	���� 2) [1, 0, 1, 1, 0]

	���� 3) ����2�� ���� ����� �迭�� ����ǥ ���
	���� 3) O, X, O, O, X

	���� 4) ���� ���
	���� 4) 60��

*/

struct OMR {
	int count;
	int answer[5];
	int hgd[5];
};


void main() {
	srand(time(0));

	struct OMR m = { 0 };
	m.count = 5;
	
	m.answer[0] = 1;
	m.answer[1] = 3;
	m.answer[2] = 4;
	m.answer[3] = 2;
	m.answer[4] = 5;

	printf("���� : ");
	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.answer[i]);
	}
	printf("\n\n");

	//���� 1) 1~5 ������ ���� ���� 5�� ����
	printf("���� 1) 1~5 ������ ���� ���� 5�� ����\n");

	for (int i = 0; i < m.count; i++) {
		m.hgd[i] = rand() % 5 + 1;
	}
	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.hgd[i]);
	}
	printf("\n\n");

	// ���� 2) answer�� hgd�� ����
	// ������ 1, ������ 0���� �迭�� ������ ���

	printf("���� 2) answer�� hgd�� ����\n");
	printf("������ 1, ������ 0���� �迭�� ������ ���\n");

	int* omr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		
		if(m.answer[i] == m.hgd[i]) {
			omr[i] = 1;
		}
		else {
			omr[i] = 0;
		}
	}

	printf("[");
	for (int i = 0; i < m.count; i++) {
		printf("%d ", omr[i]);
	}
	printf("]");
	printf("\n\n");

	// ���� 3) ����2�� ���� ����� �迭�� ����ǥ ���

	printf("���� 3) ����2�� ���� ����� �迭�� ����ǥ ���\n");

	printf("[");
	for (int i = 0; i < m.count; i++) {
		if (omr[i] == 1) {
			printf(" O ");
		}
		else {
			printf(" X ");
		}
	}
	printf("]");
	printf("\n\n");

	printf("���� 4) ���� ��� (1������ 20��)\n");

	int jumsu = 0;
	for (int i = 0; i < 5; i++) {
		if (m.answer[i] == m.hgd[i]) {
			jumsu = jumsu + 20;
		}
	}
	printf("���� : %d��", jumsu);
	printf("\n\n");
}