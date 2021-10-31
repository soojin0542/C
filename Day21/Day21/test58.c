#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	// 빙고만들기
	srand(time(NULL));

	//빙고판 숫자 25개
	int number[25] = { 0 };

	//셔플용 변수들
	int dest, sour, temp;

	//입력받을 숫자
	int num;

	//빙고카운트
	int bingoCount = 0;

	// 빙고판 숫자 초기화(0부터 24)
	for (int i = 0; i < 25; i++) {
		number[i] = i;
	}

	//셔플 1000번
	for (int i = 0; i < 1000; i++) {
		int dest = rand() % 25;
		int sour = rand() % 25;

		int temp = number[dest];
		number[dest] = number[sour];
		number[sour] = temp;
	}

	//무한반복
	while (1) {
		system("cls"); //화면 지운다
		printf("빙고게임"); printf("\n");
		printf("빙고 카운트 : %d", bingoCount); printf("\n");

		//빙고판 만들기
		for (int i = 0; i < 25; i++) {
			//빙고숫자가 35일때 # 표시해준다
			if (number[i] == 35) {
				printf("#"); printf("\t");
			}
			else {
				printf("%d", number[i]); printf("\t");
			}
			//5개 마다 한칸씩 내려주기
			if ((i + 1) % 5 == 0) {
				printf("\n\n");
			}
		}

		printf(" 숫자를 입력하세요 ");
		scanf_s("%d", &num);

		for (int i = 0; i < 25; i++) {
			if (number[i] == num) {
				number[i] = 35;
			}
		}

		bingoCount = 0;
		//연산

		for (int i = 0; i < 5; i++) {

			//가로
			if (number[i * 5] == 35 &&
				number[i * 5 + 1] == 35 &&
				number[i * 5 + 2] == 35 &&
				number[i * 5 + 3] == 35 &&
				number[i * 5 + 4] == 35) {
				bingoCount++;
			}

			//세로
			if (number[i * 5] == 35 &&
				number[i * 5 + 1] == 35 &&
				number[i * 5 + 2] == 35 &&
				number[i * 5 + 3] == 35 &&
				number[i * 5 + 4] == 35) {
				bingoCount++;
			}
		}

		//왼쪽대각선
		if (number[0] == 35 &&
			number[6] == 35 &&
			number[12] == 35 &&
			number[18] == 35 &&
			number[24] == 35) {
			bingoCount++;
		}

		//오른쪽대각선
		if (number[4] == 35 &&
			number[8] == 35 &&
			number[12] == 35 &&
			number[16] == 35 &&
			number[20] == 35) {
			bingoCount++;
		}

		//빙고카운트가 3이면 게임 종료
		if (bingoCount == 3) {
			printf("게임종료\n");
			break;
		}

	}	// while (1)
}		// int main()