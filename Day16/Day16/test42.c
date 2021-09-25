#include <Windows.h> // system("cls") 콘솔화면 지우기 (안써도 된다)
#include <stdio.h>

/*
	# 미니 윷놀이
	1. p1은 숫자1, p2는 숫자2로 표현한다.
	2. 숫자 1~5를 입력하면 해당 숫자만큼 오른쪽으로 이동
	3. p1과 p2는 번갈아 가면서 플레이
	4. 잡게되면 잡힌쪽의 인덱스는 -1로 변경(처음으로 되돌아간다)
*/

int main() {
	int p1arr[15] = { 0 };
	int p2arr[15] = { 0 };
	int p1 = 0;
	int p2 = 0;
	int turn = 0;

	p1arr[p1] = 1;
	p2arr[p2] = 2;

	while (1) {
		int i = 0;
		i = 0;
		while (i < 15) {
			printf("%d  ", p1arr[i]);
			i += 1;
		}

		printf("\n");
		i = 0;
		while (i < 15) {
			printf("%d  ", p2arr[i]);
			i += 1;
		}

		printf("\n");
		int sel;
		scanf_s("%d", &sel);
		if (sel >=6 || 0>= sel) {
			printf("수가 너무 작거나 큽니다.\n");
			printf("수 1~5중 하나를 입력해주세요..\n");
			sel = 0;
		}

		if (turn == 0) {
			p1arr[p1] = 0;
			printf("2번 차례\n\n");
			p1 += sel;
			p1arr[p1] = 1;
			turn = 1;
		}

		else if (turn == 1) {
			p2arr[p2] = 0;
			printf("1번 차례\n\n");
			p2 += sel;
			p2arr[p2] = 2;
			turn = 0;
		}

	}
}