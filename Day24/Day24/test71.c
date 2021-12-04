#include <Windows.h>
#include <stdio.h>


int main() {
	srand(time(0));
	int size = 10;
	int front[10] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
	int back[10] = { 0 };

	run(&front[0], &back[0], size);
}


void print_card(int* p, int size) {
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf(" %d ", p[i]);
	}
	printf(" ]");
}


void shuffle_card(int* p, int size) {
	for (int i = 0; i < 1000; i++) {
		int r_num = rand() % size;
		int tmp = p[0];
		p[0] = p[r_num];
		p[r_num] = tmp;
	}
}


int input() {
	int idx = 0;
	printf("\n"); printf("ют╥б 1 (1~10)");
	scanf_s("%d", &idx);
	idx -= 1;
	return idx;
}


int game(int* front, int* back, int size) {
	int idx1 = input();
	int idx2 = input();

	if (front[idx1] == front[idx2]) {
		back[idx1] = front[idx1];
		back[idx2] = front[idx2];
		size += 1;
	}
	return size;
}


int run(int* front, int* back, int size) {
	shuffle_card(front, size);
	int cnt = 0;

	while (1) {
		print_card(front, size);
		print_card(back, size);

		cnt = game(front, back, cnt);
		if (cnt == 5) {
			break;
		}
	}
}