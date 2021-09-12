#include <Windows.h>
#include <stdio.h>

int main() {

	// 가위 바위 보 게임 만들기
	// 1.가위 2.바위 3.보 
	// p1, p2 는 가위 바위 보를 한다. 결과 출력 


	int p1; int p2;
	int 가위 = 1;
	int 바위 = 2;
	int   보 = 3;

	printf("p1이 낼것(숫자입력) 1)가위 2)바위 3)보 "); printf("\n");
	scanf_s("%d", &p1);

	printf("p2가 낼것(숫자입력) 1.가위 2.바위 3.보 "); printf("\n");
	scanf_s("%d", &p2);

	if (p1 == p2) {
		printf("비겼다.");
	}


	if (p1 == 가위 && p2 == 보) {
		printf("p1 승");
	}

	if (p1 == 바위 && p2 == 가위) {
		printf("p1 승");
	}

	if (p1 == 보 && p2 == 바위) {
		printf("p1 승");
	}



	if (p1 == 보 && p2 == 가위) {
		printf("p2 승");
	}

	if (p1 == 가위 && p2 == 바위) {
		printf("p2 승");
	}

	if (p1 == 바위 && p2 == 보) {
		printf("p2 승");
	}

}