#include <stdio.h>
int main() {
	int e = 0; //반복


	// 문제 1) 아래 배열 a 에서 내가 입력한 값만 빼고 b 에 저장 
	int a[5] = { 10,20,30,40,50 };
	int b[5] = { 0,0,0,0,0 };
	// 예) 30 ==> b[5] = {10,20,40,50,0};
	int f = 0; int g = 0;

	printf("값을 입력하세요\n");
	scanf_s("%d", &f);

	for (g = 0; g < 5; g++) {
		if (a[g] == f) {
			a[g] = 0;
		}
	}

	for (g = 0; g < 5; g++) {
		if (a[g] != 0) {
			b[e] = a[g];
			e++;
		}
	}

	e = 0;
	for (e = 0; e < 5; e++) {
		printf("[%d] ", b[e]);
	}
	printf("\n\n");


	// 문제 2) 아래 배열에서 내가 입력한 번호 만 빼고 d 에 저장 
	int c[6] = { 1001, 40, 1002, 65, 1003,  70 };
	int d[6] = { 0,0,0,0,0,0 };
	// 예) 1002 ==> d[6] = {1001, 40, 1003, 70 , 0, 0};
	int h = 0; int i = 0; int j = 0;

	printf("값을 입력하세요\n");
	scanf_s("%d", &h);

	for (i = 0; i < 6; i++) {
		if (c[i] == h) {
			c[i] = 0;
			c[i + 1] = 0;
		}
	}

	e = 0;
	for (i = 0; i < 6; i++) {
		if (c[i] != 0) {
			d[e] = c[i];

			e++;
		}
	}
	
	e = 0;
	while (e < 6) {
		printf("[%d] ", d[e]);
		e += 1;
	} 
	


}