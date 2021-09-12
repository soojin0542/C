#include <Windows.h>
#include <stdio.h>

int main() {
	// 1 ==> 플레이어
	// 2 ==> 벽
	// 0 ==> 길

	// 1) 1을 누르면 왼쪽으로 이동 
	// 2) 2를 누르면 오른쪽으로이동 
	// 3) 벽은 지나가지못한다.

	int game[9] = { 2, 0, 0, 0, 0, 0, 1, 0, 2 };

	int player = 0;
	for (int i = 0; i < 9; i++) {
		if (game[i] == 1) {
			player = i;
		}
	}

	while (1) {
		int i = 0;
		while (i < 9) {
			if (game[i] == 0) {
				printf("__");
			}
			else if (game[i] == 1) {
				printf("옷");
			}
			else if (game[i] == 2) {
				printf("[]");
			}
			i = i + 1;
		}
		printf("\n");

		printf("[1.오른쪽] [2.왼쪽]\n");
		printf("숫자를 입력하세요 : ");
		int move = 0;
		scanf_s("%d", &move);

		if (move == 1) {
			printf("왼쪽으로 이동한다.\n\n");
			if (player - 1 >= 0) {
				if (game[player - 1] == 2) {
					printf("벽이다. 지나가지 못할것같다.\n");
					printf("다른 길을 찾아볼까?\n\n");
					continue;
				}
				game[player] = 0;
				player -= 1;
				game[player] = 1;
			}
		}

		else if (move == 2) {
			printf("오른쪽으로 이동한다.\n\n");
			if (player + 1 < 9) {
				if (game[player + 1] == 2) {
					printf("벽이다. 지나가지 못할것같다.\n");
					printf("다른 길을 찾아볼까?\n\n");
					continue;
				}
				game[player] = 0;
				player += 1;
				game[player] = 1;
			}
		}

		else {
			printf("잘못된 입력인것같다. 다시 입력해보자.\n\n");
		}
	}
}