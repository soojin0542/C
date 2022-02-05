#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

/*
//60초부터 0초까지 숫자를 출력하고 0초가 되면 발사를 출력한다.
void main() {
	for (int i = 60; i >= 0; i--) {
		printf("%d ", i);
		if (i == 0) {
			printf("발사");
		}
	}
}

//반복 횟수를 입력받아 그만큼 안녕하세요를 출력하는 프로그램을 만들어보자
void main() {
	int i = 0;
	printf("몇번 반복할까요? : ");
	scanf("%d", &i);

	for (i; i > 0; i--) {
		printf("안녕하세요?\n");
		
	}
}
*/

//1******
//12*****
//123****
//1234***
//12345**
//123456*
//1234567
//을 출력하는 프로그램을 만들어보자

/*
void main() {
	int x = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", x);
			x++;
		}
		printf("\n");
	}
}


void main() {
	int i = 0;
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
}


void main() {
	int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", arr[j]);
		}
		printf("\n");
	}
}


void main() {
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
*/


//정수를 입력받아 계속 더하는 프로그램을 만들어보자
//0을 입력하면 지금까지 입력된 모든 수의 합계를 출력하고 종료한다.
/*void main() {
	int n;
	int sum = 0;
	while (1) {
		scanf("%d", &n);
		if (n == 0) 
			break;
		sum += n;
	}
	printf("%d", sum);
	
	/*int a = 1;
	int add = 0;
	int su = 0;

	while (a) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &add);
		if (add == 0) {
			break;
		}
		printf("\n");

		su = su + add;
		add = 0;
	}
	printf("합계=%d", su);
}
*/


//1부터 100까지의 자연수 중에서 3의 배수를 출력해보자

//1부터 100까지의 자연수 중에서 3과 5의 공배수를 출력해보자

//입력받은 수가 소수인지 구분하는 프로그램
//3은 소수다. 왜냐하면 3의 약수는 1과 3이기 때문이다

//중첩 반복문으로 구구단을 만들어보자