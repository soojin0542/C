#include <Windows.h>
#include <stdio.h>


int get_player(int* p, int count) {
	int player = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] == 3) {
			player = i;
		}
	}
	return player;
}


void game(int* p, int count) {
	printf("[ ");
	for (int i = 0; i < count; i++) {
		if (p[i] == 3) {
			printf("��");
		}
		else {
			printf("[ ]");
		}
	}
	printf(" ]");
}


int left(int* p, int player) {
	if (player - 1 >= 0) {
		p[player] = 0;
		p[player - 1] = 3;
		player -= 1;
	}
	return player;
}


int right(int* p, int player, int count) {
	if (player + 1 < count) {
		p[player] = 0;
		p[player + 1] = 3;
		player += 1;
	}
	return player;
}


void run(int* p, int count) {
	int player = get_player(p, count);

	while (1) {
		game(p, count);
		int move = 0;
		printf("����(1),������(2) : ");
		scanf_s("%d", &move); printf("\n\n");
		if (move == 1) {
			player = left(p, player);
		}
		else if (move == 2) {
			player = right(p, player, count);
		}
	}
}


void main() {
	// # �����̵�[�Լ��� ����]
	int count = 7;
	int game[7] = { 0, 0, 0, 3, 0, 0, 0 };

	run(&game[0], count);
}