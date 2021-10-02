#include <stdio.h>
int main() {

/*
	// 문제1)  인덱스(방번호)를 입력하면 값출력
	int a[5] = { 10,20,30,40,50 };
	// 예) 3 ==> 40


	int i = 0;
	printf("출력할 인덱스 번호 입력(0~4)\n");
	scanf_s("%d", &i);
	printf("%d", a[i]); printf("\n");


	// 문제2) 아래배열중 가장큰값 출력 
	int b[5] = { 12, 54, 23, 87, 1 };
	// 예) 87

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

	// 문제3) 아래 배열중 홀수의 개수 출력 
	int c[5] = { 12,54,23,87,1 };
	// 예) 홀수의 개수 : 3
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (c[i] % 2 == 1) {
			count = count + 1;
		}
	}
	printf("홀수의 개수 : %d개", count);
*/

	// 문제4) 아래배열을 거꾸로 저장 
	int d[5] = { 1,2,3,4,5 };
	int e[5] = { 0,0,0,0,0 };
	//예) e[5] = {5,4,3,2,1};
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