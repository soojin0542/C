#include <Windows.h>
#include <stdio.h>


// 변수[문제]

void main() {


// 문제1) 사각형 넓이 출력
/*
	float garo;
	garo = 7;

	float sero;
	sero = 3;

	float rect;
	rect = garo * sero;

	printf("%f, %f, %f", garo, sero, rect)
*/



// 문제2) 시험점수를 20, 43, 71점을 받았다. 총점 평균 출력.
/*
	float score1; float score2; float score3; float total; float avg;
	score1 = 20;
	score2 = 43;
	score3 = 71;

		total = score1 + score2 + score3;
	avg = total / 3;

	printf("과학 : %f점, 수학 : %f점, 영어 : %f점, 평균 : %f점", score1, score2, score3, avg);
*/



// 문제3) 186800원을 화폐매수로 출력
/*
	// 정답3) 5만원(3장) 1만원(3장) 5천원(1장) 5백원(1개) 1백원(3개)
	int money = 186800;

	int n1 = money / 50000;
	int n2 = (money % 50000) / 10000;
	int n3 = (money % 10000) / 5000;
	int n4 = (money % 5000) / 1000;
	int n5 = (money % 1000) / 500;
	int n6 = (money % 500) / 100;

	printf("5만원 = %d장\n", n1);
	printf("1만원 = %d장\n", n2);
	printf("5천원 = %d장\n", n3);
	printf("천원 = %d장\n", n4);
	printf("5백원 = %d개\n", n5);
	printf("백원 = %d개\n", n6);
*/



// 문제4) x와 y의 값 교환.
/*
	int x;
	int y;
	int z; //힌트

	x = 10;
	y = 20;

	z = x;
	x = y;
	y = z;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
*/



// 문제5) 월급이 100원이다. 연봉출력(조건 : 세금 10%제외)
/*
	float salary; float month; float tax; float total;
	salary = 100;
	month = 12;
	tax = 10;
	total = 1200 * 0.9;

		printf("월급 : %f, 연봉 : %f", salary, total);
*/


}