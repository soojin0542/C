#include <Windows.h>
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	//����1) �ε��� 2���� �Է¹ް� ��ȯ 
	//       1, 3   ==> 10 , 40 , 30 , 20, 50
	int i1 = 0;
	int i2 = 0;

	printf("�ε��� 1�� �Է��ϼ��� ");
	scanf_s("%d", &i1);
	if (i1 >= 5 || -1 >= i1) {
		printf("���� �ʹ� �۰ų� Ů�ϴ�.\n");
		printf("�� 0~4�� �ϳ��� �Է����ּ���..\n");
		i1 = 0;
	}

	printf("�ε��� 2�� �Է��ϼ��� ");
	scanf_s("%d", &i2);
	if (i2 >= 5 || -1 >= i2) {
		printf("���� �ʹ� �۰ų� Ů�ϴ�.\n");
		printf("�� 0~4�� �ϳ��� �Է����ּ���..\n");
		i2 = 0;
	}

	int a = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = a;

	int i = 0;
	while (i < 5) {
		printf("%d", arr[i]); printf("\n");
		i += 1;
	}
}