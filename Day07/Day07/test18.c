#include <Windows.h>
#include <stdio.h>


int main() {

/*
	int n = 1;
	int total = 0;

	// 1~5 까지 전체합 1 + 2 + 3 + 4 + 5
	while (n < 6) {
		total = total + n;
		n = n + 1;
	}
	printf("합 : %d", total); printf("\n");
*/


// 문제1) 1~5중에서 홀수의 합 출력 1 + 3 + 5
/*
	int n = 1;
	int total = 0;

	while (n < 6) {

		if (n % 2 == 1) {
			total = total + n;
		}
		n = n + 1;
	}
	printf("홀수의 합 : %d", total); printf("\n");
*/


	// 문제2) 1~5중에서 홀수의 갯수 출력 ==> 3
/*
	int n = 1;
	int total = 0;

	while (n < 6) {
		if (n % 2 == 1) {
			total = total + 1;
			}
			n = n + 1;
		}
		printf("홀수의 갯수 : %d", total); printf("\n");
*/


}