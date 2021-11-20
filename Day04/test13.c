#include <Windows.h> // system
#include <stdio.h>  // printf , scanf_s
#include <stdlib.h> // rand
#include <time.h>   // time
/*
void main() {
	srand(time(0)); // 랜덤함수 의 기준변경 
	// 1~4만정도사이의 숫자가 나온다

	int a = 10;
	printf("%d", a); printf("\n");

	int b = rand();
	printf("%d", b); printf("\n");

	int c = rand();
	printf("%d", c); printf("\n");

	// 0 ~ 4
	int d = rand() % 5; // 0,1,2,3,4 
	printf("%d", d); printf("\n");

	// 3 ~ 7
	int e = rand() % 5 + 3; // 0~4 ==> 3~7
	printf("%d", e); printf("\n");

	// -4 ~ 3
	int f = rand() % 8 - 4;
	printf("%d", f); printf("\n");

	system("pause");
}
*/;

// 구구단 문제 랜덤 출제후 정답입력후 결과출력 

int main() {
	srand(time(0));
	//rand();

	int a = rand() % 8 + 2;  // 2단 ~ 9단
	int b = rand() % 9 + 1;  // 1~9
	int c = a * b;

	printf("%d * %d = ", a, b);

	int d;
	scanf_s("%d", &d);
	if (d == c) {
		printf("정답");
	}

	if (d != c) {
		printf("오답");
	}
}
