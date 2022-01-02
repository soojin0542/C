#include <Windows.h>
#include <stdio.h>
#include <time.h>

/*
	# OMR카드[구조체(변수) 변경]

	예)
	omr = [1, 3, 4, 2, 5]
	hgd = [1, 1, 4, 2, 3]

	문제 1) 1~5 사이의 랜덤 숫자 5개 저장
	정답 1) [1, 1, 4, 2, 3]

	문제 2) omr과 hgd을 비교해 정답은 1,
	오답은 0으로 배열에 저장해 출력
	정답 2) [1, 0, 1, 1, 0]

	문제 3) 문제2를 통해 저장된 배열로 정오표 출력
	정답 3) O, X, O, O, X

	문제 4) 성적 출력
	정답 4) 60점

*/

struct OMR {
	int count;
	int answer[5];
	int hgd[5];
};


void main() {
	srand(time(0));

	struct OMR m = { 0 };
	m.count = 5;
	
	m.answer[0] = 1;
	m.answer[1] = 3;
	m.answer[2] = 4;
	m.answer[3] = 2;
	m.answer[4] = 5;

	printf("정답 : ");
	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.answer[i]);
	}
	printf("\n\n");

	//문제 1) 1~5 사이의 랜덤 숫자 5개 저장
	printf("문제 1) 1~5 사이의 랜덤 숫자 5개 저장\n");

	for (int i = 0; i < m.count; i++) {
		m.hgd[i] = rand() % 5 + 1;
	}
	for (int i = 0; i < m.count; i++) {
		printf("%d ", m.hgd[i]);
	}
	printf("\n\n");

	// 문제 2) answer과 hgd을 비교해
	// 정답은 1, 오답은 0으로 배열에 저장해 출력

	printf("문제 2) answer과 hgd을 비교해\n");
	printf("정답은 1, 오답은 0으로 배열에 저장해 출력\n");

	int* omr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		
		if(m.answer[i] == m.hgd[i]) {
			omr[i] = 1;
		}
		else {
			omr[i] = 0;
		}
	}

	printf("[");
	for (int i = 0; i < m.count; i++) {
		printf("%d ", omr[i]);
	}
	printf("]");
	printf("\n\n");

	// 문제 3) 문제2를 통해 저장된 배열로 정오표 출력

	printf("문제 3) 문제2를 통해 저장된 배열로 정오표 출력\n");

	printf("[");
	for (int i = 0; i < m.count; i++) {
		if (omr[i] == 1) {
			printf(" O ");
		}
		else {
			printf(" X ");
		}
	}
	printf("]");
	printf("\n\n");

	printf("문제 4) 성적 출력 (1문제당 20점)\n");

	int jumsu = 0;
	for (int i = 0; i < 5; i++) {
		if (m.answer[i] == m.hgd[i]) {
			jumsu = jumsu + 20;
		}
	}
	printf("점수 : %d점", jumsu);
	printf("\n\n");
}