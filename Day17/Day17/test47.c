#include <stdio.h>
int main() {

/*
	// ����1)  �ε���(���ȣ)�� �Է��ϸ� �����
	int a[5] = { 10,20,30,40,50 };
	// ��) 3 ==> 40


	int i = 0;
	printf("����� �ε��� ��ȣ �Է�(0~4)\n");
	scanf_s("%d", &i);
	printf("%d", a[i]); printf("\n");


	// ����2) �Ʒ��迭�� ����ū�� ��� 
	int b[5] = { 12, 54, 23, 87, 1 };
	// ��) 87

	int max_val;
	max_val = b[0];

	int n = 0; int max_index = 0;
	while (n < 5) {
		if (max_val < b[n]) {
			max_val = b[n];
			max_index = n;
		}
		n += 1;
	}
	printf("%d", b[max_index]);		printf("\n");

	// ����3) �Ʒ� �迭�� Ȧ���� ���� ��� 
	int c[5] = { 12,54,23,87,1 };
	// ��) Ȧ���� ���� : 3
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (c[i] % 2 == 1) {
			count = count + 1;
		}
	}
	printf("Ȧ���� ���� : %d��", count);
*/

	// ����4) �Ʒ��迭�� �Ųٷ� ���� 
	int d[5] = { 1,2,3,4,5 };
	int e[5] = { 0,0,0,0,0 };
	//��) e[5] = {5,4,3,2,1};
	int i = 0;
	int back = 4;

	while (i < 5) {
		e[i] = d[back];
		back -= 1;
		i += 1;
	}
	i = 0;

	while (i < 5) {
		printf("[%d] ", e[i]);
		i += 1;
	}
}