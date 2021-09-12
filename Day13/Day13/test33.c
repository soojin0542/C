#include <Windows.h>
#include <stdio.h>

void main() {

	int arr[5] = { 0 };	
	// 5개의 방을 모두 0으로 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;


	//문제1) 배열의 전체 합출력 
	/*
	//정답1) 150
	int a = 0;
	a = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	printf("%d", a);
	*/


	//문제2) 4의 배수만 출력
	/*
	//정답2) 20 40
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	*/


	//문제3) 4의 배수의 합 출력
	/*
	//정답3) 60
	int b = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			b = b + arr[i];
		}
	}
	printf("%d",b);
	*/


	//문제4) 4의 배수의 개수 출력
	/*
	//정답4) 2
	int c = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			c = c + 1;
		}
	}
	printf("%d\n", c);
	*/


	//문제5) 짝수의 개수 출력
	//정답5) 5
	int d = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			d = d + 1;
		}
	}
	printf("%d\n", d);
}