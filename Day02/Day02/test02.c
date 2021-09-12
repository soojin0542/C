#include <Windows.h>
#include <stdio.h>

/*
	# 입력받기
	. scanf_s(1, 2);
	. 1번(data type) : %d, %f, %s, %c 등등을 사용할 수 있다.
	. 2번(저장할 변수) : [주의]변수 앞에 &(앤퍼샌드)을 붙여줘야한다.
*/


//test
/*void main() {

	printf("시작\n"); printf("\n");
	int a;
	scanf_s("%d", &a); // 숫자를 입력하고 엔터를 누를때까지 대기한다.
	printf("종료\n"); printf("\n");

	printf("%d", a); printf("\n");

}

*/


//입력받기[문제]
void main() {

	// 문제1) 숫자 1개를 입력받고 연봉출력 (세금10%제외)
/*
	float salary; float year;

	printf("예상연봉 구하기(월급을 입력해주세요)"); printf("\n");
	int a;
	scanf_s("%f", &salary);
	printf("종료\n"); printf("\n");
	year = salary * 12 * 0.9;
	printf("%f", year); printf("\n");

*/


// 문제2) 숫자 2개를 입력받고 삼각형 넓이출력
/*
	float num1;
	float num2;
	float total;

	printf("삼각형 밑변"); printf("\n");
	scanf_s("%f", &num1); 
	printf("삼각형 높이"); printf("\n");
	scanf_s("%f", &num2);

	total = num1 * num2 / 2;
	printf("%f", total); printf("\n");

*/


// 문제3) 숫자 2개를 입력받고 서로 교환 

	int num3;
	int num4;

	printf("숫자 1 입력"); printf("\n");
	scanf_s("%d", &num3);
	printf("숫자 2 입력"); printf("\n");
	scanf_s("%d", &num4);
	printf("%d, %d", num4, num3);


}