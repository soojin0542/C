#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	/*
	int a = 5;
	printf("a : %d", a); printf("\n\n");
	//5

	int b = rand() % 5;
	printf("b : %d", b); printf("\n\n");
	//0~4

	int c = rand() % 5 + 1;
	printf("c : %d", c); printf("\n\n");
	//1~5

	int d = rand() % 5 - 3;
	printf("d : %d", d); printf("\n\n");
	//-3~1
	*/
	
	int e = 1; //원하는 수 입력
	for (int i = 0; i <= 1000; i++) {
		int f = rand() % 5 - 3; // 범위 입력
		printf("f의 %d번째 : %d", i, f); printf("\n\n");

		if (f == e) {
			printf("f의 %d번째에 %d이 나왔습니다", i, e); printf("\n\n");
			break;
		}
	}
	
}