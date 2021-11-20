#include <Windows.h>
#include <stdio.h>

int main() {

	//문1) 숫자 1개를 입력받고 60이상이면 1출력 
/*
	int a;
	printf("문제1) 숫자 1개를 입력받고 60이상이면 1출력"); printf("\n"); printf("\n");
	scanf_s("%d", &a); printf("\n");

	printf("%d", 60 < a);
*/

	//문2)  초를 입력받고 시간 분 초 출력  5321 ==> 
/*
	int b;
	printf("문제2) 초를 입력받고 시간 분 초 출력"); printf("\n");

	scanf_s("%d", &b);
	printf("%d 시, %d 분, %d 초", b / 60, b % 60, b % 60);
*/

	//문3) 숫자 2개를 입력받고 두번째 숫자가 크면 1출력 
/*
	int c; int d;

	printf("문제3) 숫자 2개를 입력받고 두번째 숫자가 크면 1출력"); printf("\n");

	scanf_s("%d", &c);
	scanf_s("%d", &d);

	printf("%d", c < d);
*/

	// 문4) 숫자를 입력받고 짝수면 1출력 
	// 짝수 ==> 2의 배수 
	// 2의 배수 ==> 어떤수든 2로 나눠서 나머지가 0이면 2의 배수이다. 
	int e;
	printf("문제4) 숫자를 입력받고 짝수면 1출력"); printf("\n");
	scanf_s("%d", &e);

	printf("%d", e % 2 == 0);

}