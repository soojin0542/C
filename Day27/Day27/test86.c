#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void main() {
	//60부터 0까지 숫자를 출력하고 0이 되면 발사를 출력한다.
	for (int i = 60; i >= 0; i--) {
		printf("%d ", i);
		if (i == 0) {
			printf("발사\n\n");
		}
	}


	//입력받은 수만큼 안녕하세요 출력
	int i = 0;
	printf("몇번 입력할까요? : ");
	scanf("%d", &i); printf("\n");

	for (i; i > 0; i--) {
		printf("안녕하세요?\n");	
	}
	printf("\n\n");

	//입력받은 수만큼 별 출력
	while (1) {
		int star = 0;
		printf("데이터를 입력하세요(0을 입력하면 종료) : ");
		scanf("%d", &star);
		for (int i = 0; i < star; i++) {
			printf("*");
		}
		printf("\n");

		if (star == 0) {
			break;
		}
	}
	printf("\n\n");


	//정수를 입력받아 계속 더하는 프로그램을 만들어보자
	//0을 입력하면 지금까지 입력된 모든 수의 합계를 출력하고 종료한다.
	int n = 0, sum = 0;
	while (1) {
		printf("정수를 입력하세요(0을 입력하면 종료) : ");
		scanf("%d", &n);
		if (n == 0)
			break;
		sum += n;
	}
	printf("%d", sum);
	printf("\n\n");


	//9병의 맥주를 출력해보자
	//9병의 맥주가 벽장에 있네, 9병의 맥주라네
	//하나를 내려서 넘겼네, 8병의 맥주가 벽장에 있네 (이것을 1병이 될때까지 반복한다)
	//1병의 맥주가 벽장에 있네, 1병의 맥주라네
	//그것을 내려서 넘겼네, 더 이상 벽장에 맥주가 없네
	//더 이상 벽장에 맥주가 없네, 맥주는 더 이상 없다네
	int macju = 9;
	for (macju; macju > -2;) {
		printf("%d병의 맥주가 벽장에 있네, %d병의 맥주라네\n", macju, macju);
		macju -= 1;
		printf("하나를 내려서 넘겼네, %d병의 맥주가 벽장에 있네\n\n", macju);
		
		if (macju == 1) {
			printf("그것을 내려서 넘겼네, 더 이상 벽장에 맥주가 없네\n\n");
			printf("더 이상 벽장에 맥주가 없네, 맥주는 더 이상 없다네\n\n");
			break;	//break가 실행되지 않으면 -1이 추가로 출력된다.
					//마이너스로 출력된다면 다시 해보자
		}
	}


	//a가 나오면 카운트 1 증가
	//반복이 종료되면 입력된 a의 총 갯수를 출력
	//.을 입력하면 반복 중단
	char input = 0;
	int cnt = 0;
	while (1) {
		printf("문자를 입력하세요(종료시 입력된 a의 갯수 출력 종료 0) : ");
		printf("(종료 0) : ");
		scanf(" %c", &input);

		if (input == 'a') {
			cnt++;
		}
		if (input == '0') {
			break;
		}
	}
	printf("%d\n", cnt);
	printf("\n\n");


	//1******
	//12*****
	//123****
	//1234***
	//12345**
	//123456*
	//1234567
	//을 출력하는 프로그램을 만들어보자
	int x = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", x);
			x++;
		}
		printf("\n");
	}
	printf("\n\n");

	/*
	i = 0;
	int j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			printf(" "); 
		}
		for (j = 0; j < 1 + i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");


	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", arr[j]);
		}
		printf("\n");
	}
	printf("\n\n");


	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	*/


	//1부터 100까지의 자연수 중에서 3의 배수를 출력해보자
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d  ", i);
		}
	}
	printf("\n\n");


	//1부터 100까지의 자연수 중에서 3과 5의 공배수를 출력해보자
	for (i = 0; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n\n");


	//369게임을 만들어보자
	//50이 되면 끝을 출력하며 멈춘다

	//x3 될때마다 박수치기
	i = 1;
	for (; ; i++) {
		if (i % 3 == 0) {
			printf("짝 ");
		}
		else {
			printf("%d ", i);
		}

		if (i == 50) {
			printf("끝");
			break;
		}
	}
	printf("\n\n");

	//3, 6, 9가 들어가면 박수치기
	//3, 6, 9가 두개 들어가면 두번 박수치기
	for (i = 1;; i++) {
		if (i / 10 == 3 && 
			(i % 10 == 3 || 
			 i % 10 == 6 || 
			 i % 10 == 9)) {
				printf("짝짝 ");
			}
		else if (i % 10 == 3 ||
				 i % 10 == 6 ||
				 i % 10 == 9) {
			printf("짝 ");
		}
		else {
			printf("%d ", i);
		}

		if (i == 50) {
			printf("끝");
			break;
		}
	}
	printf("\n\n");


	//입력받은 수가 소수인지 구분하는 프로그램
	//3은 소수다. 왜냐하면 3의 약수는 1과 3이기 때문이다
	int num = 0, cnt = 0;
	i = 0;
	printf("수를 입력하세요\n");
	scanf("%d", &num);
	for (int i = 2; i < num; i++) {
		//printf("%d ÷ %d = %d\n", num, i, num % i); <-확인용
		if (num % i == 0)
			cnt++;
	}

	if (cnt == 0) {
		printf("\n소수입니다"); printf("\n\n");
	}
	else {
		printf("\n소수가 아닙니다"); printf("\n\n");
		
	}


	//중첩 반복문으로 구구단을 만들어보자
	int ggd = 0; i = 0;
	printf("출력할 구구단 수 입력 : ");
	scanf("%d", &ggd); printf("\n");
	
	//가로
	for (i = 1; i <= 10; i++) {
		printf("%d X %d = %d  ", ggd, i, ggd*i);
	}
	printf("\n\n");

	//세로
	for (i = 1; i <= 10; i++) {
		printf("%d X %d = %d", ggd, i, ggd*i);  printf("\n");
	}
	printf("\n\n");

	//1~9단까지 전체 출력 (이중 for문)
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 10; b++) {
			printf("%d X %d = %d", a, b, a * b); printf("\n");
		}
		printf("\n");
	}
	printf("\n\n");
} // void main()