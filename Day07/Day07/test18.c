#include <Windows.h>
#include <stdio.h>


int main() {

/*
	int n = 1;
	int total = 0;

	// 1~5 ���� ��ü�� 1 + 2 + 3 + 4 + 5
	while (n < 6) {
		total = total + n;
		n = n + 1;
	}
	printf("�� : %d", total); printf("\n");
*/


// ����1) 1~5�߿��� Ȧ���� �� ��� 1 + 3 + 5
/*
	int n = 1;
	int total = 0;

	while (n < 6) {

		if (n % 2 == 1) {
			total = total + n;
		}
		n = n + 1;
	}
	printf("Ȧ���� �� : %d", total); printf("\n");
*/


	// ����2) 1~5�߿��� Ȧ���� ���� ��� ==> 3
/*
	int n = 1;
	int total = 0;

	while (n < 6) {
		if (n % 2 == 1) {
			total = total + 1;
			}
			n = n + 1;
		}
		printf("Ȧ���� ���� : %d", total); printf("\n");
*/


}