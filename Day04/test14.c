#include <Windows.h>
#include <stdio.h>
#include "test14.h"

// if 문 옵션 2가지 (단독사용불가능)
// 1) else  ==> if 의 조건 빼고 전부다 
/* 
void main() {
	//점수

	int score;
	scanf_s("%d", &score);

	if (60 <= score && score <= 100) {
		printf("합격");
	}
	else {
		printf("불합격");
	}
	printf("\n");
	printf("\n");
*/
	
// if 의 옵션 2가지
// 1) else
// 2) elseif ==> if 의 조건을 여러개 필요할때 사용 
//				 위에서부터 순차적으로 조건을 검사해서 참이나오면 나머지는 무시
//				결과는 언제나 1개만 나온다.


// if 의 옵션 2가지
// 1) else
// 2) elseif ==> if 의 조건을 여러개 필요할때 사용 
//				 위에서부터 순차적으로 조건을 검사해서 참이나오면 나머지는 무시
//				결과는 언제나 1개만 나온다.
void main() {
	printf("====== atm ======="); printf("\n");
	printf("1. 입금 2. 출금 3.종료"); printf("\n");

	int select;
	int wallet

	scanf_s("%d", &select);
	scanf_s("%d", &wallet);

	if (select == 1) {
		printf("입금");
	}

	printf("입금할 금액을 입력하세요.");

	else if (select == 2) {
		printf("출금");
	}

	else if (select == 3) {
		printf("종료");
	}

	else {
		printf("오류");
	}

}