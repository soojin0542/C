#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


struct Number {
	int p[5];
};


void main() {
	srand(time(0));
	//1~25까지 겹치는 숫자 없이 프린트
	int a = rand() % 5;
	int b = rand() % 5;

	int arr[5][5] = {0};
	
	
	for (int i = 1; i <= 25; i++) {
		int a = rand() % 5;
		int b = rand() % 5;
		if (arr[a][b] == 0) {
			arr[a][b] = i;
		}

		else {
			i -= 1;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("  [ %d ]  ", arr[i][j]);
		}
		printf("\n");
	}
}

ㅁㄴㅇㄹ