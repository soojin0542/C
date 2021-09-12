#include <Windows.h>
#include <stdio.h>

//비교연산자
/*
1. 출력 , 변수 , 입력 

2. 연산자 (operator) 중요연산자 4종류 
	1) 산술연산자 ==> + - * / %
	2) 대입연산자 ==> int a;  a = 10;
				  ==> 오른쪽의 값을 왼쪽으로 저장(복사)한다.

3. 비교연산자 ==> 6개 ==> 결과가 1(참)  0(거짓) 둘중하나로 출력된다.
				1.  왼쪽이 크다			a > b
				2.  왼쪽이 작다			a < b
				3.  서로 같다			a == b
				4.  서로 다르다			a != b 
				5.  왼쪽이 크거나 같다  a >= b
				6.  왼쪽이 작거나 같다  a <= b
*/

/*
void main() {

	int b = 10; // 축약형 , 선언과 저장을 한번에 한다. 
	int a = b;
	//printf("b : %d" , b); printf("\n");

	//비교연산자 
	printf("%d", 10 == 10); printf("\n");
	printf("%d", 10 != 10); printf("\n");
	printf("%d", 10 > 10); printf("\n");
	printf("%d", 10 < 10); printf("\n");
	printf("%d", 10 >= 10); printf("\n");
	printf("%d", 10 <= 10); printf("\n");

	system("pause");
}
*/

void main() {

	//문제1) 전부 1이나오도록 숫자를 변경해보세요 
/*
	printf("%d", 10 == 10); printf("\n");
	printf("%d", 1 != 10); printf("\n");
	printf("%d", 11 > 10); printf("\n");
	printf("%d", 1 < 10); printf("\n");
	printf("%d", 10 >= 10); printf("\n");
	printf("%d", 10 <= 10); printf("\n");
*/

	//문제2) 전부 0 이나오도록 a나  b를 변경해보세요 
/*
	int a = 1;
	int b = 2;
	printf("================================="); printf("\n");
	printf("%d", a == b); printf("\n");
	printf("%d", a != a); printf("\n");
	printf("%d", a > b); printf("\n");
	printf("%d", a < a); printf("\n");
	printf("%d", a >= b); printf("\n");
	printf("%d", b <= a); printf("\n");

*/

}