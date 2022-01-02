#include <Windows.h>
#include <stdio.h>

struct Store {
	int count;
	int money;
	int* counts;
	int* prices[3];
};

void main() {
	struct Store burger = { 0 };
	burger.money = 20000;
	burger.count = 3;

	for (int i = 0; i < burger.count; i++) {
		burger.counts[i] = 0;
	}

	burger.prices[0] = 8700;
	burger.prices[1] = 4200;
	burger.prices[2] = 1500;
}