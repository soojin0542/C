#include <Windows.h>
#include <stdio.h>

struct Game {
	int count;
	int player;
	int game[7];
};

void main() {
	struct Game g = { 0 };
	g.count = 7;
	for (int i = 0; i < g.count; i++) {
		g.game[i] = 0;
	}
	g.player = 3;
	g.game[g.player] = 3;
	int move = 0;


	while (1) {
		printf("[ ");
		for (int i = 0; i < g.count; i++) {
			if (g.game[i] == 3) {
				printf("¿Ê");
			}
			else {
				printf("[ ]");
			}
		}
		printf(" ]\n");


		printf("1. ¿ÞÂÊ\n");
		printf("2. ¿À¸¥ÂÊ\n");
		printf("3. Á¾·á\n");
		scanf_s("%d", &move);

		if (move == 1) {
			if (g.player - 1 >= 0) {
				g.game[g.player] = 0;
				g.game[g.player - 1] = 3;
				g.player -= 1;
			}
		}
		else if (move == 2) {
			if (g.player + 1 < g.count) {
				g.game[g.player] = 0;
				g.game[g.player + 1] = 3;
				g.player += 1;
			}
		}
		else if (move == 3) {
			break;
		}
	} // while (1)
}