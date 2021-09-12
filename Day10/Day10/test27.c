#include <Windows.h>
#include <stdio.h>

int main() {
	// 3 6 9 게임 
	// 1~50을 차례대로 출력 
	// 조건1) 숫자가 3 이나 6이나 9면 숫자대신 "짝" 출력
	// 조건2) 숫자가 3 이나 6이나 9가 2개면 "짝짝" 출력 
	// 12짝45짝78짝.....
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
			printf("짝짝"); printf("\n");
		}
		else if (plus == 1) {
			printf("짝"); printf("\n");
		}
		else {
			printf("%d", n); printf("\n");
		}
		n = n + 1;
	}
}