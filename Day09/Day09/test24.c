#include <Windows.h>
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(0));
	// 문제 1) 랜덤학생점수 

	// 조건 1) 랜덤학생 점수 ==> 3명 의 랜덤점수 0~100점을 출력
	// 조건 2) 번호는 1000 ~ 1002 까지 출력 
	// 조건 3) 1등출력 

	//rand() %개수 + 시작숫자

	int max = 0; int max_num = 0;

	for (int i = 1000; i < 1003; i++) {
		int score = rand() % 101;
		printf("%d : %d", i, score); printf("\n");

		if (max < score) {
			max = score;
			max_num = i;
		}
	}
	printf("1등 : %d  :  %d", max_num, max); printf("\n");
}