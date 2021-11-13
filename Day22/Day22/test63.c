#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

void grade(int* p) {
	//학생 5명의 성적을 랜덤적으로 배열에 저장
	//총점 평균
	srand(time(0));
	int a[5] = { rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1 };
	int b = 0; int c = 0;
	
	
	
	
}


int main() {
	int i = 0;
	int g = 0;
	grade(&g);

	for (i = 0; i < 5; i++) {
		printf("%d", g[i]);
	}
}