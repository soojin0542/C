#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void ggd(int* p) {
	srand(time(NULL));
	int a = 0;
	int d = 0;

	while (a < 3) {
		
		int b = (rand() % 9 + 2); int c = (rand() % 9 + 2);
		printf("%d X %d = ?", b, c);
		printf("\n");
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &d);

		if (b * c == d) {
			printf("�����Դϴ�!");
			*p += 1;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�");
		}
		printf("\n");
		printf("\n");
		a++;
	}
}

int main() {
	// ����) �������� 3���� �����ϰ� �����ϰ�, ������ ���� ���
	int g = 0;
	ggd(&g);

	printf("��㰹�� : %d", g); printf("\n");
}