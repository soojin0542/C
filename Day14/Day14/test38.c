#include <Windows.h>
#include <stdio.h>

void main() {
	// ���� 0 ���� ���� 
	int t[7] = { 0 };
	// �ڸ� ���� 
	// ��ȣ : 0 1 2 3 4 5 6
	// �ڸ� : o o o o o o o
	// 0~6���� �Է¹ް� �ڸ� ���Ÿ� �Ѵ�.

	// ��)
	// 1. 0 1 2 3 4 5 6
	// 1. o o o o o o o
	// 1. ������ �¼��� �Է��ϼ��� 0
	// 1. 0���ڸ��� ���ŵǾ����ϴ�.

	// 2. 0 1 2 3 4 5 6
	// 2. x o o o o o o
	// 2. ������ �¼��� �Է��ϼ��� 0
	// 2. 0���ڸ��� �̹� ������ �¼��Դϴ� �ٸ��ڸ��� �Է��ϼ���.	

	int i = 0;
	while (i == 0) {
		int j = 0;
		while (j < 7) {
			if (t[j] == 1) {
				printf("x ");
			}
			else {
				printf("o ");
			}
			j = j + 1;
		}
		printf("\n");
		int sel = 0;
		printf("���ڸ� �Է��Ͽ� �����ϼ���.\n\n");
		scanf_s("%d", &sel);

		if (sel >= 7) {
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if (t[sel] == 0) {
			t[sel] = 1;
		}
		else {
			printf("�̹� ���ŵ� �ڸ��Դϴ�.\n");
		}
	}
}