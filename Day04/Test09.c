#include <Windows.h>
#include <stdio.h>

int main() {
	// 문제1) 숫자 1개를 입력받고 연봉출력 (세금10%제외)
/*
	float salary;
	printf("문제1)연봉출력기(월급을 입력하세요)"); printf("\n");
	scanf_s("%f", &salary);
	printf("%f", salary * 12 * 0.9);
*/

	// 문제2) 숫자 2개를 입력받고 삼각형 넓이출력

	float num1;
	float num2;
	float total;

	printf("문제2)삼각형 넓이 구하기"); printf("\n");
	printf("삼각형의 밑변을 입력하세요 : ");
	scanf_s("%f", &num1);
	printf("삼각형의 높이를 입력하세요 : ");
	scanf_s("%f", &num2);

	printf("밑변 : %f, \n", num1);
	printf("높이 : %f, \n", num2);

	total = num1 * num2 / 2;

	printf("삼각형의 넓이 : %f", total);


// 문제3) 숫자 2개를 입력받고 서로 교환 
/*
	int num3;
	int num4;
	printf("문제3) 숫자 2개를 입력받고 서로 교환"); printf("\n");

	scanf_s("%d", &num3);
	scanf_s("%d", &num4);

	printf("%d, %d", num4, num3);
*/

}