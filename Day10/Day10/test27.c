#include <Windows.h>
#include <stdio.h>

int main() {
	// 3 6 9 ���� 
	// 1~50�� ���ʴ�� ��� 
	// ����1) ���ڰ� 3 �̳� 6�̳� 9�� ���ڴ�� "¦" ���
	// ����2) ���ڰ� 3 �̳� 6�̳� 9�� 2���� "¦¦" ��� 
	// 12¦45¦78¦.....
	int n = 1;

	while (n <= 50) {
		int a = n / 10;
		int b = n % 10;
		int plus = 0;

		if (a == 3 || a == 6 || a == 9) {
			plus++;
		}
		if (b == 3 || b == 6 || b == 9) {
			plus++;
		}

		if (plus == 2) {
			printf("¦¦"); printf("\n");
		}
		else if (plus == 1) {
			printf("¦"); printf("\n");
		}
		else {
			printf("%d", n); printf("\n");
		}
		n = n + 1;
	}
}