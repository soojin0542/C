#include <Windows.h>
#include <stdio.h>

void main() {
	// 전부 0 으로 저장 
	int t[7] = { 0 };
	// 자리 예매 
	// 번호 : 0 1 2 3 4 5 6
	// 자리 : o o o o o o o
	// 0~6번을 입력받고 자리 예매를 한다.

	// 예)
	// 1. 0 1 2 3 4 5 6
	// 1. o o o o o o o
	// 1. 예매할 좌석을 입력하세요 0
	// 1. 0번자리가 예매되었습니다.

	// 2. 0 1 2 3 4 5 6
	// 2. x o o o o o o
	// 2. 예매할 좌석을 입력하세요 0
	// 2. 0번자리는 이미 예매한 좌석입니다 다른자리를 입력하세요.	

	int i = 0;
	while (i == 0) {
		int j = 0;
		while (j < 7) {
			if (t[j] == 1) {
				printf("x ");
			}
			else {
				printf("o ");
			}
			j = j + 1;
		}
		printf("\n");
		int sel = 0;
		printf("숫자를 입력하여 예매하세요.\n\n");
		scanf_s("%d", &sel);

		if (sel >= 7) {
			printf("다시 입력해주세요.\n\n");
		}
		else if (t[sel] == 0) {
			t[sel] = 1;
		}
		else {
			printf("이미 예매된 자리입니다.\n");
		}
	}
}