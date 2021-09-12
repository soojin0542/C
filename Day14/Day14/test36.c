#include <Windows.h>
#include <stdio.h>

int main() {

	int lotto[] = { 3, 0, 3, 3, 3, 3, 0 };
	// 문제) 위 복권이 당첨인지 아닌지 출력 
	// 조건) 3이 연속으로 3개이상이면 당첨 

	int i = 0;
	int win = 0;

	for (int i = 0; i < 5; i++) {
		if (lotto[i] == 3 && lotto[i + 1] == 3 && lotto[i + 2] == 3) {
			win = 1;
		}
	}

	if (win == 1) {
		printf("당첨");
	}
	else {
		printf("꽝");
	}
}