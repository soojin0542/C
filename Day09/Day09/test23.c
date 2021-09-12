#include <Windows.h>
#include <stdio.h>

// 반복문 종류 2가지 // 1)초기식 2)조건식 3)증감식 
// 1) while
// 2) for   // 증감식은;(세미콜론)이 없다.

int main() {
	//증감식 모양 4종류 
	// a = a + 1;
	// a += 1;
	// a++;
	// ++a;

	int n = 0;    // 초기식 
	while (n < 4) {  // 조건식
		printf("%d", n);
		n = n + 1;  // 증감식 
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 4; i = i + 1) {
		printf("%d", i);
		printf("\n");
	}
	printf("\n");
}