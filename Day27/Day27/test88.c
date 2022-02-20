#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main() {
	/*
	//2차원 배열 기본
	int a[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d] ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	*/

	/*
	//n개의 정수값을 받아 배열에 저장하고 역순으로 출력
	int arr[100];
	int count = 0;
	int change = 0;
	int b = 0;
	printf("입력할 정수의 개수:");
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("%d번째 요소를 입력하세요:", i);
		scanf("%d", &change);
		arr[i] = change;
	}
	int j = count - 1;


	for (j; j >= 0; j--) { //반대로 츨력
		printf("[%d] ", arr[j]);
	}
	printf("\n");

	for (int i = 0; i < count; i++) { //배열에 있는 모든 수를 합해서 출력
		b = b + arr[i];
	}
	printf("%d", b);
	printf("\n\n");
	*/

	/*
	int student[3][3] = {
	{30, 10, 11},
	{40, 90, 32}, 
	{70, 65, 56} };

	for (int i = 0; i < 3; i++) {
		printf("%d번 학생 평균 : %d\n\n", i+1 , (student[i][0] + student[i][1] + student[i][2]) / 3);
	}
	*/

	
	//
	srand(time(NULL));
	int a[10] = { 0 };
	int b = 0;
	int c = 0;
	int d = 0;

	while (b<100) {
		a[rand() % 10] += 1;
		b++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (c < a[i]) { //a의 i번째 인덱스에 저장된 수보다
						//기존(c)에 저장된 수가 더 높다면
			c = a[i];	//c에 저장
			d = i;
		}
	}
	printf("가장 많이 생성된 수 : %d (%d개)", d, c);

	/*
	//주사위를 60000번 던져서 결과를 출력()
	srand(time(NULL));
	int a[7] = { 0 };
	for (int i = 1; i <= 60000; i++) {
		a[rand() % 6 + 1]++; // 1~6
	}

	printf("================================\n");
	printf("주사위면	빈도\n");
	printf("================================\n");
	for (int i = 0; i < 6; i++){
		printf("  %d		%d\n", i + 1, a[i + 1]);
	}	
	*/

	/*
	//이중 어떤것이 무한 for문을 나갈수 없을까
	//정답 abort() 버그남
	for (;;) {
		printf("안녕");
		1. break;	//루프문 탈출
		2. exit(0);	//현재 c 프로그램을 완전 종료하는 기능
					//주로 에러가 났을때 강제종료를 시키기 위해 쓴다
					//모든 열려진 파일들을 자동으로 닫는다.
		3. abort();
	}
	*/
}