#include <Windows.h>
#include <stdio.h>

/*
	# 변수(variable) : 데이터를 저장하는 공간
	1) 선언
		int a;
		메모리 공간할당
	2) 사용
		a = 10;
		메모리에 값 저장

	# 변수의 특징
		1) 변수는 한 가지 값만 저장할 수 있다. (새로운 값이 저장되면 기존 값 삭제)
		2) 변수 선언은 한가지 이름으로만 사용할 수 있다. (중복선언불가)
		3) 예약어를 변수 이름으로 사용할 수 없다. (파란글씨는 예약어)
		4) 숫자로 이름을 시작할 수 없다. 7a(x), a7(o)
		5) 대소문자를 구분한다.
		6) 변수이름으로 특수문자 $와 _ 두 개 사용가능
*/

/*
void main() {

	// 정수(int) : 4byte
	int a;
	a = 10; // 10을 a에 저장해라!
	printf("%d", a); printf("\n");

	// 실수(float) : 4byte
	float b;
	b = 10.0;
	printf("%f", b); printf("\n");

	float b2;
	b2 = 10.12345;
	printf("%.3f", b2); printf("\n");

	// 문자(char) : 1byte
	char c;
	c = 'a';
	printf("%c", c); printf("\n");
}


void main() {

	int a;
	a = 10;
	a = -1;
	a = 0;
	a = 13;
	a = 3;
	printf("%d", a); printf("\n");
	//int a;	

	int A;
	A = 100;
	printf("%d", a); printf("\n");
	printf("%d", A); printf("\n");

	// 예) 사각형의 넓이
	float garo;
	garo = 7;

	float sero;
	sero = 3;

	float rect;
	rect = garo * sero;
	printf("가로 %.2f, 세로 %.2f, 사각형 넓이 : %.2f", garo, sero, rect); printf("\n");

}


// 변수[문제]

void main() {

	// 문제1) 사각형 넓이 출력 
	float garo;
	garo = 7;

	float sero;
	sero = 3;

	float rect;
	rect = garo * sero;
	printf("가로 : %.2f, 세로 : %.2f, 사각형 넓이 : %.2f", garo, sero, rect); printf("\n");


	// 문제2) 시험점수를 20, 43, 71점을 받았다. 총점 평균 출력. 
	float score1; float score2; float score3; float total; float avg;
	score1 = 20;
	score2 = 43;
	score3 = 71;
	total = score1 + score2 + score3 / 3;

	printf("국어 %.1f, 수학 %.1f, 영어 %.1f, 평균점수 : %.1f", score1, score2, score3, total); printf("\n");

*/

	// 문제3) 186800원을 화폐매수로 출력 
	int money = 186800;
	printf("돈 : %d원 ", 186800); printf("\n");



	// 정답3) 5만원(3장) 1만원(3장) 5천원(1장) 5백원(1개) 1백원(3개)
	

	// 문제4) x와 y의 값 교환.
	int x;
	int y;

	int z; //힌트

	x = 10;
	y = 20;

	// 문제5) 월급이 100원이다. 연봉출력(조건 : 세금 10%제외)
	float salary;
	salary = 100;


}

