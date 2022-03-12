#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	//업다운 게임
	srand(time(NULL));
	int a = rand() % 100 + 1;
	int scan = 0, count = 1;
	/*
	while (1) {
		printf("1~100 사이 수를 입력하세요 : ");
		scanf("%d", &scan);
		if (a < scan) {
			printf("다운\n\n");
		}
		if (a > scan) {
			printf("업\n\n");
		}
		if (a == scan) {
			printf("정답입니다!\n시도횟수 : %d\n시스템 종료\n", count);
			break;
		}
		count++;
	}
	*/
	//하드모드
	count = 10; //원하는 횟수
	while (1) {
		printf("[하드모드 | 남은 횟수 : %d회]\n", count);
		printf("1~100 사이 수를 입력하세요 : ");
		scanf("%d", &scan);

		if (a < scan) {
			printf("다운\n\n");
		}
		if (a > scan) {
			printf("업\n\n");
		}
		if (a == scan) {
			printf("정답입니다!\n남은 횟수 : %d\n시스템 종료\n", count-1);
			break;
		}
		if (count == 0) {
			printf("남은 횟수를 전부 소진했습니다.");
		}
		count--;
	}
}

/*
void delay(clock_t n) {
	clock_t start = clock();
	while (clock() - start < n);
}

int main() {
	int a = rand() % 3;

	//가위바위보
	while (1) {

	}
}
*/

/*
int main() {
	int a = rand() % 3;
	int arr[7] = { 0 };

	//로또
	while (1) {

	}
} 
*/