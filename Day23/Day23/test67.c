#include <Windows.h>
#include <stdio.h>

/*
	# 배열 기본문제[함수로 변경]
	문제 1) 전체 합 리턴
	정답 1) 150

	문제 2) 4의 배수의 합 리턴
	정답 2) 60

	문제 3) (인덱스로)값 교체
	
	문제 4) (값으로)값 교체
*/

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

	printf(">>>문제 1\n");
	tot = test1(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");


	printf(">>>문제 2\n");
	tot = test2(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");


	printf(">>>문제 3\n");
	test3(&arr[0], 1, 2);
	print_arr(&arr[0], count);
	printf("\n");


	printf(">>>문제 4\n");
	test4(&arr[0], count, 20, 40);
	print_arr(&arr[0], count);
	printf("\n");
}