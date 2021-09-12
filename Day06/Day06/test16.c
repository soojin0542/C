#include <Windows.h>
#include <stdio.h>

int main() {
	/*
		문제) 시험점수 3개를 입력받고 평균이 100~90 이면 A , 89~80 이면 B ,
		그 이하는 "재시험" 출력
		조건) 만약에 A 나 B 점수를 받고 일의자리가 7이상이면 각각 A+ , B+ 출력
		예) 76 ==> 재시험 , 88 ==> B+ , 93 ==> A
	*/

	printf("시험점수를 입력하세요. 등급을 알려드립니다. \n");

	int a;
	int b;
	int c;

	printf("국어 :");
	scanf_s("%d", &a);

	printf("수학 :");
	scanf_s("%d", &b);

	printf("과학 :");
	scanf_s("%d", &c);

	int average = (a + b + c) / 3;
	int A = 100 >= average >= 90;
	int B = 89 >= average >= 80;

	if (A) {
		printf("A등급");
	}
	else if (B) {
		printf("B등급");
	}
	else if (average == 97) {
		printf("A+등급");
	}
	else if (average == 87) {
		printf("B+등급");
	}
	else {
		printf("재시험");
	}
}