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
		printf("답을 입력하세요 : ");
		scanf_s("%d", &d);

		if (b * c == d) {
			printf("정답입니다!");
			*p += 1;
		}
		else {
			printf("틀렸습니다");
		}
		printf("\n");
		printf("\n");
		a++;
	}
}

int main() {
	// 문제) 구구단을 3문제 랜덤하게 출제하고, 정답의 개수 출력
	int g = 0;
	ggd(&g);

	printf("장담갯수 : %d", g); printf("\n");
}