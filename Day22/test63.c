#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

void grade(int* p1, double * p2) {

	//학생 5명의 성적을 랜덤적으로 배열에 저장
	//총점 평균
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		int a = rand() % 100 + 1;
		printf("%d", a); printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {
		p1[0] = p1[0] + a[i];
	}
}


int main() {
	int a1 = 0; double a2 = 0;
	int b = 0;
	grade(&a1, &a2);
	a2 = a1 / 5;
	
	printf("총점 : %d", a1); printf("\n");
	printf("평균점수 : %f", a2);
}