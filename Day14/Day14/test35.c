#include <Windows.h>
#include <stdio.h>

int main() {

	int score[5] = { 10 ,   20,   60 ,  40,   3 };
	int num[5] = { 1001, 1002, 1003, 1004, 1005 };

	//문제1) 성적이 60점 이상이면 합격. 합격생 수 출력
/*
	//정답1) 1명
	int i;
	int count = 0;
	for (i = 0; i < 6; i++) {
		if (score[i] >= 60) {
			count += 1;
			printf("합격생:%d명\n\n", count);
		}
	}

	//문제2) 학번을 입력하면 점수 출력 
	//정답2) 1001 ==> 10
	
	printf("학번을 입력하세요 : ");
	int number = 0;
	scanf_s("%d", &number);
	
	
	for (i = 0; i < 5; i++) {
		if (number == num[i]) {
			printf("성적 = %d\n", score[i]);
		}
	}



	//문제3) 성적을 입력받아 방번호(index) 출력
	//정답3) 60 ==> 1003
	printf("성적을 입력하세요 : ");
	int a = 0;
	int i = 0;
	scanf_s("%d", &a);

	for (i = 0; i < 5; i++) {
		if (a == score[i]) {
			printf("학번 = %d\n", num[i]);
		}
	}



	//문제4) 없는 학번을 입력하면 "없다"라고 출력
	//정답4) 1006 ==> "없다"
	printf("학번을 입력하세요 : ");
	int b = 0;
	int i = 0;
	scanf_s("%d", &b);

	int check = -1;
	for (i = 0; i < 5; i++) {
		if (b == num[i]) {
			check = i;
		}
	}
	if (check == -1) {
		printf("없다");
	}
*/


	//문제5) 1등학생의 학번과 성적 출력
	//정답5) 1003학번(60점)
	int max_score = 0;
	int max_idx = 0;
	int i = 0;

	for (i = 0; i < 5; i++) {
		if (max_score < score[i]) {
			max_score = score[i];
			max_idx = i;
		}
	}
	printf("%d학번(%d점)\n", num[max_idx], max_score);

}