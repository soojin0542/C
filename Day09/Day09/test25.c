#include <Windows.h>
#include <stdio.h>
#include <time.h>

int main() {

	// 베스킨라빈스 31
	// p1 , p2 는 번갈아가면서 1~3을 입력한다.
	// br 는 p1 , p2 의 값을 누적 저장한다.
	// br 가 31 을 넘어가면 게임종료 ( 넘긴쪽이 패배 : 승리자출력) 

	// p1 ==> 2  ,  br ==> 2
	// p2 ==> 3  ,  br ==> 5
	// p1 ==> 1  ,  br ==> 6  .. br > 10 ==> 종료 
	int p1 = 0; int p2 = 0; int br = 0;
	int turn = 0;
	int run = 1;

	while (run == 1) {
		if (turn == 0) {
			printf("p1) 1에서 3 사이 숫자들중 1개를 입력하세요. \n");
			scanf_s("%d", &p1); printf("\n");
			br = br + p1;
			turn = 1;
		}
		/*
		else if (p1 > 4) {
			printf("다시 입력해주세요 \n");
			turn = 0;
		}
		*/
		else if (turn == 1) {
			printf("p2) 1에서 3 사이 숫자들중 1개를 입력하세요. \n");
			scanf_s("%d", &p2); printf("\n");
			br = br + p2;
			turn = 0;
		}
		/*
		else if (p2 > 4) {
			printf("다시 입력해주세요 \n");
			turn = 1;
		}
		*/
		if (br >= 31) {
			if (turn == 0) {
				printf("p1승리 \n");
			}
			else if (turn == 1) {
				printf("p2승리 \n");
			}
			run = 0;
		}
	}
}