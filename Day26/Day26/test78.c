#include <Windows.h>
#include <stdio.h>

struct Student {
	int hakbun[5];
	int score[5];
};


void main() {
	// 문제 1) 1~100 사이의 랜덤 숫자 5개 저장
	// 정답 1)[60, 100, 73, 3, 81]
	printf("문제 1) 1~100 사이의 랜덤 숫자 5개 저장\n");
	struct Student s;
	s.hakbun[0] = 1; s.hakbun[1] = 2; s.hakbun[2] = 3; 
	s.hakbun[3] = 4; s.hakbun[4] = 5;

	s.score[0] = 60; s.score[1] = 100; s.score[2] = 73;
	s.score[3] = 3; s.score[4] = 81;

	printf("\n\n");


	//문제 2) 전교생의 정보 출력
	printf("문제 2) 전교생의 정보 출력\n");
	for (int i = 0; i < 5; i++) {
		printf("학번 : %d 성적 : %d", s.hakbun[i], s.score[i]);
		printf("\n");
	}
	printf("\n\n");

	//문제 3) 전교생의 총점 출력
	//정답 3) 총점(317점)
	printf("문제 3) 전교생의 총점 출력\n");
	int a = 0;
	for (int i = 0; i < 5; i++) {
		a = a + s.score[i];
	}
	printf("총점 : %d", a);
	printf("\n\n\n");


	//문제 4) 전교생의 평균 출력
	//정답 4) 평균(63.4점)
	printf("문제 4) 전교생의 평균 출력\n");
	a = 0; float b = 0.f;
	for (int i = 0; i < 5; i++) {
		a = a + s.score[i];
	}
	 b = a / 5.f;

	printf("%.1f", b);
	printf("\n\n\n");


	//문제 5) 합격생(성적 75점이상)의 학번과 성적 출력
	//정답 5) 1002학번(100점), 1005학번(81점)
	printf("문제 5) 합격생(성적 75점이상)의 학번과 성적 출력\n");
	a = 0;
	while (a < 5) {
		if (s.score[a] >= 75) {
			printf("%d학번 (%d점)", s.hakbun[a], s.score[a]);
			printf("\n");
		}
		a += 1;
	}
	printf("\n\n");


	//문제 6) 1등 학생의 학번과 성적 출력
	//정답 6) 1002학번(100점)
	printf("문제 6) 1등 학생의 학번과 성적 출력\n");
	a = 0; int c = 0; int d = 0;
	while (a < 5) {
		if (s.score[a] >= c) {
			c = s.score[a];
			d = s.hakbun[a];
		}
		a += 1;
	}
	printf("학번 : %d (%d점)", d, c);
	printf("\n\n\n");


	//문제 7) 학번을 입력받아 성적 출력
	printf("문제 7) 학번을 입력받아 성적 출력\n");

	int e = 0;
	printf("학번을 입력하세요.(성적 출력) ");
	scanf_s("%d", &e);
	printf("%d", s.score[e - 1]);
	printf("\n\n");
	
	
	//문제 8) 성적을 입력받아 학번 출력
	printf("문제 8) 성적을 입력받아 학번 출력\n");

	e = 0; int f = 0;
	printf("성적을 입력하세요.(학번 출력) ");
	scanf_s("%d", &e);
	for (int i = 0; i < 5; i++) {
		if (e == s.hakbun[i]) {

		}
	}

	printf("%d", );
	printf("\n\n");


	//문제 9) 학번을 입력받아 학생정보(학번과 성적) 삭제
	//조건 9) 없는 학번 입력 시, 예외처리
	printf("문제 9) 학번을 입력받아 학생정보 삭제\n");
	printf("\n\n");


	//문제 10) 성적순으로 내림차순 정렬
	printf("문제 10) 성적순으로 내림차순 정렬\n");
	printf("\n\n");

}



