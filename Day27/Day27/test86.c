#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));

	/*int a = 5;
	printf("a : %d", a); printf("\n\n");

	int b = rand() % 5;
	printf("b : %d", b); printf("\n\n");

	int c = rand() % 5 + 1;
	printf("c : %d", c); printf("\n\n");

	int d = rand() % 5 - 3;
	printf("d : %d", d); printf("\n\n");*/

	int e = 7;
	for (int i = 0; i <= 1000; i++) {
		int f = rand() % 10 + 7; // 7~16
		printf("f의 %d번째 : %d", i, f); printf("\n\n");

		if (f == e) {
			printf("f의 %d번째에 %d이 나왔습니다", i, e); printf("\n\n");
			break;
		}
	}
}