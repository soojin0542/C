#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(0));

	int omr[] = { 1, 5, 3, 2, 5 }; // 모범 답안
	int me[5] = { 0 };			 // 학생 답안

	//문제1) me에 1~5 사이의 랜덤 숫자를 5개 저장 후,
	//       omr과 비교하여 점수출력 (1문제당 20점)
	int score = 0;
	int i;
	srand(time(NULL));
	
	for (i = 0; i < 5; i++) {
		me[i] = rand() % 5 + 1;
		printf("%d\n", me[i]);
	}


	//문제2) 맞으면 "o", 틀리면 "x" 출력 
	
}