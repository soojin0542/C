#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
for (int i = 'A'; i <= 'F'; i++) {
		printf("%d : %c\n", i, i);
	} // �ƽ�Ű�ڵ�� A�� 65��. A(65)������ B(66) �̰�,
	// A(65) + 1 == B(66) �̹Ƿ� �ƽ�Ű�ڵ带 ����ϸ� ���ڷ�
	//���� ����� �����ϴ�. ����� A�� 65�� a�� 97�̴�.
	printf("%d", 'A'); //�� ����ϸ� 65�� ���´�.
*/

int main(void) {
	/*int i;
	char codes[size];

	for (i = 0; i < size; i++) 
		codes[i] = 'a' + i;
		
	for (i = 0; i < size; i++)
		printf("%c ", codes[i]);
	printf("\n");
	
	return 0;*/
	
		/*
	int scores[5];
	int sum = 0;
	int i, average;

	for (int i = 0; i < 5; i++) {
		printf("�л����� ������ �Է��ϼ��� : ");
		scanf("");
	}

	int a[6];
	for (int i = 0; i < 6; i++) {
		a[i] = 1+i;
		printf("%d ", a[i]);
	}*/

	//�⼮�� �����
	int a = 0;
	int i = 1;
	int book[10] = { 0 };

	for (i = 1; i < 10; i++) {
		printf("%d�� �л� �����Է�\n", i);
		printf("�̹� ���ǿ� �⼮�ϼ̳���?(�ߴٸ� 1, �ƴ϶�� 2)\n");
		scanf("%d", &a); printf("\n");

		if (a == 1) {
			book[i] += 1;
			a = 0;
		}
		else {
			a = 0;
		}

		if (book[i] <= 6) {
			printf("���� �ϼ��� �����մϴ�(�� �⼮�� | %d)", book[i]);
		}
	}

	
	return 0;
}