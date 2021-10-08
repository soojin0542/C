//배열 테스트 1,2 복습

/*
#include <stdio.h>
int main() {
	int a[5] = { 10, 4, 5, 3, 1 };
	int b[5] = { 0, 0, 0, 0, 0 };
	int c[5] = { 0, 0, 0, 0, 0 };

	// 문제 1) 위  배열를 이용해서  전체 합출력 ==> int a[5] = { 10, 4, 5, 3, 1 };
	int d = 0; int e = 0;

	while (e < 5) {
		d += a[e];
		e += 1;
	}
	printf("%d", d);

		// 문제 2) 다음 리스트를 값을 입력하면 번호 출력
		// 예) 5 ==> 2
		int f; int g = 1;

		while (g == 1) {
			printf("값을 입력하세요\n");
			scanf_s("%d", &f);
			if (f >= 5 || f <= -1) {
				printf("수가 너무 크거나 작습니다.\n");
			}
			g = 0;
		}
		printf("%d", a[f]);


		// 문제 3) 다음 리스트를 이용해서 a 의 값중 홀수만 b 에 저장(위치는 동일한위치에 저장)
		// 예) b = [0, 0, 5, 3, 1]
		int h = 0;

		while (h < 5) {
			if (a[h] % 2 == 1) {
				b[h] = a[h];
			}
			h += 1;
		}
		
		h = 0;
		while (h < 5) {
			printf("[%d] ", b[h]);
			h += 1;
		}

		// 문제 4) 다음 리스트를 이용해서 a 의 값중 홀수만 c 에 저장(위치는 앞에서 부터  저장)
		// 3번문제와 조금 다름
		// 예) c = [5, 3, 1, 0, 0]
		int i = 0; int j = 0;

		while (i < 5) {
			if (a[i] % 2 == 1) {
				b[j] = a[i];
				j += 1;
			}
			i += 1;
		}

		i = 0;
		while (i < 5) {
			printf("[%d] ", b[i]);
			i += 1;
		}
}
*/

/*
#include <stdio.h>
#include <Windows.h>
int main() {

	// 문제1)  인덱스(방번호)를 입력하면 값출력
	int a[5] = { 10,20,30,40,50 };

	// 예) 3 ==> 40
	int f = 0; int g = 0;

	printf("방번호를 입력하세요\n");
	scanf_s("%d", &g);
	
	printf("%d", a[g]);

	// 문제2) 아래배열중 가장큰값 출력 
	int b[5] = { 12,54,23,87,1 };
	// 예) 87
	int h = 0; int i = 0; int j = 0;

	h = b[0];

	while (i < 5) {
		if (h < b[i]) {
			h = b[i];
			j = i;
		}
		i += 1;
	}
	printf("1등 : %d", b[j]);		printf("\n");

	// 문제3) 아래 배열중 홀수의 개수 출력 
	int c[5] = { 12,54,23,87,1 };
	// 예) 홀수의 개수 : 3
	int k = 1; int l = 0;

	while (k < 5) {
		if (c[k] % 2 == 1) {
			l += 1;
		}
		k += 1;
	}
	printf("%d", l);

	// 문제4) 아래배열을 거꾸로 저장 
	int d[5] = { 1,2,3,4,5 };
	int e[5] = { 0,0,0,0,0 };
	//예) e[5] = {5,4,3,2,1};
	int m = 0; int n = 4;

	while (n > -1) {
		printf("[%d] ", d[n]);
		n -= 1;
	}
}
*/

