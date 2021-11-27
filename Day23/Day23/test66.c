#include <Windows.h>
#include <stdio.h>

void print_arr(int* p, int count) {
	printf("[ ");
	for (int i = 0; i < count; i++) {
		printf("%d ", p[i]);
	}
	printf("]\n");
}



int test1(int* p, int count) {
	int tot = 0;
	for (int i = 0; i < count; i++) {
		tot += p[i];
	}
	return tot;
}



int test2(int* p, int count) {
	int tot = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] % 4 == 0) {
			tot += p[i];
		}
	}
	return tot;
}



void test3(int* p, int idx1, int idx2) {
	int tmp = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = tmp;
}



void test4(int* p, int count, int value1, int value2) {
	int idx1 = 0;
	int idx2 = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] == value1) { idx1 = i; }
		if (p[i] == value2) { idx2 = i; }
	}
	int tmp = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = tmp;
}



void main() {
	int count = 5; int tot = 0;
	int arr[5] = { 10, 20, 30, 40, 50 };


	printf(">>>巩力 1\n");
	tot = test1(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");


	printf(">>>巩力 2\n");
	tot = test2(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");


	printf(">>>巩力 3\n");
	test3(&arr[0], 0, 4);
	print_arr(&arr[0], count);
	printf("\n");


	printf(">>>巩力 4\n");
	test4(&arr[0], count, 20, 40);
	print_arr(&arr[0], count);
	printf("\n");
}