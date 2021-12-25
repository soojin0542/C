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


	//문제 1) 1~5 사이의 랜덤 숫자 5개 저장

	for (int i = 0; i < m.count; i++) {
		m.hgd[i] = rand() % 5 + 1;
	}
	printf("\n");


	// 문제 2) omr과 hgd을 비교해 정답은 1,
	// 오답은 0으로 배열에 저장해 출력
	// 정답 2)[1, 0, 1, 1, 0]

	for (int i = 0; i < length; i++) {
		
	}



}