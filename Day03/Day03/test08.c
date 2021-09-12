#include <Windows.h>
#include <stdio.h>

//종합문제
void main() {

	//문1) 숫자 1개를 입력받고 60이상이면 1출력 
/*
	int a;
	printf("문제1) 숫자 1개를 입력받고 60이상이면 1출력");
	scanf_s("%d", &a);
	printf("%d", 60 < a);
*/

	//문2)  초를 입력받고 시간 분 초 출력  5321 ==> 
/*
	printf("문제2) 초를 입력받고 시간 분 초로 바꾸어 출력");

	int b;
	scanf_s("%d", &b);

	int h = b/3600;
	int m = h/3600;
	int s = m/60;

	printf("%d시간, %d분, %d초", h, m, s);

*/

	//문3) 숫자 2개를 입력받고 두번째 숫자가 크면 1출력 
/*
	int c; int d;
	printf("문제3) 숫자 2개를 입력받고 두번째 숫자가 크면 1출력"); printf("\n"); printf("\n");

	printf("첫번째 숫자 입력 :"); 
	scanf_s("%d", &c); printf("\n");

	printf("두번째 숫자 입력 :"); 
	scanf_s("%d", &d); printf("\n");

	printf("%d", c < d); printf("\n");
*/

	// 문4) 숫자를 입력받고 짝수면 1출력
/*
	// 짝수 ==> 2의 배수 
	// 2의 배수 ==> 어떤수든 2로 나눠서 나머지가 0이면 2의 배수이다. 

	printf("문제4) 숫자를 입력받고 짝수면 1출력"); printf("\n"); printf("\n");

	int e;
	scanf_s("%d", &e);

	printf("%d", e % 2 == 0);
*/
}