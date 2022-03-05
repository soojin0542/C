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
	char str[100]; int i;
	printf("텍스트를 입력하세요 : ");
	scanf("%s", &str);
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' &&
			str[i+1] == ' ') {
			continue;
		}
		printf("%c", str[i]);
	}
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
	//랜덤으로 0~9 사이의 수를 100번 뽑은 후
	srand(time(NULL));
	int a[10] = { 0 };
	int b = 0;
	int max = 0;
	int max_su = 0;

	while (b<100) {
		a[rand() % 10] += 1;
		b++;
	}
	//가장 많이 나온 숫자와 몇번 나왔는지 출력
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) { //a의 i번째 인덱스에 저장된 수보다
						//기존(c)에 저장된 수가 더 높다면
			max = a[i];	//c에 저장
			max_su = i;
		}
	}
	printf("가장 많이 생성된 수 : %d (%d개)", max_su, max);
	*/

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
	//1차원 배열에서 각 요소가 나온 횟수를 계산
	int intezer = 0, b = 0;
	int arr[10] = { 0 };
	printf("입력할 정수의 개수(10개 이내로) : ");
	scanf("%d", &intezer);

	for (int i = 0; i < intezer; i++) {
		printf("%d번째 요소를 입력하세요 : ", i);
		scanf("%d", &b);
		arr[b]++;

		printf("\n");
		if (i + 1 == intezer) {
			break;
		}
		else {
			continue;
		}
	}

	for (int i = 0; i < intezer; i++) {
		printf("%d 은 %d 번 등장\n", i, arr[i]);
	}
	*/

	/*
	//배열에서 원하는 위치에 있는 요소를 삭제하는 프로그램
	//요소를 삭제한 후에 뒤에 있는 요소들을 한칸씩 앞으로 이동
	int a = 0, b = 0, c = 0, d = 0, i = 0;
	int arr[10] = { 0 };
	printf("입력할 정수의 개수(10개 이내로) : ");
	scanf("%d", &a);

	while (i < a) {
		printf("%d번째 요소를 입력하세요 : ", i);
		scanf("%d", &b);
		arr[i] = b;
		printf("\n");
		if (i + 1 == a) {
			break;
		}
		else {
			i++;
		}
	}
	printf("삭제할 위치 : ");
	scanf("%d", &c);
	arr[c] = 0;
	for (int i = 0; i <= 10; i++) {
		int j = 1;
		arr[c] = arr[c + j];
		j++;
		c++;
	}
	for (i = 0; i < a - 1; i++) {
		printf("%d ", arr[i]);
	}
	*/
	
	/*
	int seat[10] = { 0 };
	char a = 0;
	int b = 0, c = 0, i = 0;

	while (1) {
		for (i = 0; i < 10; i++) {
			if (seat[i] == 1) {
				c++;
				if (c == 10) {
					printf("모든 좌석이 예약 완료됐습니다\n");
					break;
				}
			}
		}

	 	printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &a);
		if (a == 'y') {
			printf("몇번째 좌석을 예약하시겠습니까?\n");
			scanf("%d", &b);
			if (seat[b - 1] == 1) {
				printf("다른 좌석을 예약해주세요\n");
			}
			else {
				seat[b - 1] = 1;
				printf("예약되었습니다\n\n");
				printf("1  2  3  4  5  6  7  8  9  10\n");
				printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n\n", seat[0], seat[1], seat[2], seat[3], seat[4], seat[5], seat[6], seat[7], seat[8], seat[9]);
			}
		}
		else {
			printf("\n예약 종료");
			break;
		}
	}
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

	/*
	//이중 어떤것이 무한 for문을 나갈수 없을까
	//정답 abort() 버그남
	for (;;) {
		printf("안녕");
		1. break;	//루프문 탈출 (프로그램 종료 x)
		2. exit(0);	//현재 c 프로그램을 완전 종료하는 기능
					//주로 에러가 났을때 강제종료를 시키기 위해 쓴다
					//모든 열려진 파일들을 자동으로 닫는다.
		3. abort(); //프로그램을 비정상적으로 종료한다.
	}
	*/

	/*
	for (;;) {
		
	} 와
	while (1) {
		
	} 은 같다
	둘다 무한반복
	*/
}