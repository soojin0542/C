#include <Windows.h> // system("cls") �ܼ�ȭ�� ����� (�Ƚᵵ �ȴ�)
#include <stdio.h>

/*
	# �̴� ������
	1. p1�� ����1, p2�� ����2�� ǥ���Ѵ�.
	2. ���� 1~5�� �Է��ϸ� �ش� ���ڸ�ŭ ���������� �̵�
	3. p1�� p2�� ������ ���鼭 �÷���
	4. ��ԵǸ� �������� �ε����� -1�� ����(ó������ �ǵ��ư���)
*/

int main() {
	int p1arr[15] = { 0 };
	int p2arr[15] = { 0 };
	int p1 = 0;
	int p2 = 0;
	int turn = 0;

	p1arr[p1] = 1;
	p2arr[p2] = 2;

	while (1) {
		int i = 0;
		i = 0;
		while (i < 15) {
			printf("%d  ", p1arr[i]);
			i += 1;
		}

		printf("\n");
		i = 0;
		while (i < 15) {
			printf("%d  ", p2arr[i]);
			i += 1;
		}

		printf("\n");
		int sel;
		scanf_s("%d", &sel);
		if (sel >=6 || 0>= sel) {
			printf("���� �ʹ� �۰ų� Ů�ϴ�.\n");
			printf("�� 1~5�� �ϳ��� �Է����ּ���..\n");
			sel = 0;
		}

		if (turn == 0) {
			p1arr[p1] = 0;
			printf("2�� ����\n\n");
			p1 += sel;
			p1arr[p1] = 1;
			turn = 1;
		}

		else if (turn == 1) {
			p2arr[p2] = 0;
			printf("1�� ����\n\n");
			p2 += sel;
			p2arr[p2] = 2;
			turn = 0;
		}

	}
}