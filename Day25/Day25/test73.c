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

void print(int* p, int count) {
	for (int i = 0; i < count; i++) {
		printf("%d ", p[i]);
	}
}


int solve1(int* p, int count) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		a += p[i];
	}
	return a;
}


int solve2(int* p, int count) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		if (p[i] % 4 == 0) {
			a += p[i];
		}
	}
	return a;
}


void solve3(int* p, int idx1, int idx2) {
	int a = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = a;
}


void solve4(int* p, int count, int value1, int value2) {
	int idx1 = 0;
	int idx2 = 0;
	for (int i = 0; i < count; i++) {
		if (p[i]==value1) {
			idx1 = i;
		}
		if (p[i] == value2) {
			idx2 = i;
		}
	}

	int a = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = a;
}


void main() {
	int count = 5;
	int arr[5] = { 10, 20, 30, 40, 50 };

	printf("문제 1\n");
	int tot = solve1(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");

	printf("문제 2\n");
	tot = solve2(&arr[0], count);
	printf("tot = %d\n", tot);
	printf("\n");

	printf("문제 3\n");
	solve3(&arr[0], 0, 4);
	print(&arr[0], count);
	printf("\n\n");

	printf("문제 4\n");
	solve4(&arr[0], count, 20, 40);
	print(&arr[0], count);
	printf("\n");
}