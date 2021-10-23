#include <Windows.h>
#include <stdio.h>

int main() {

	int apt[3][4] = {
		{101, 102, 103, 104},
		{201, 202, 203, 204},
		{301, 302, 303, 304},
	};

	int pay[3][4] = {
		{1000, 1100, 1200, 1300},
		{2000, 2100, 12200, 2300},
		{3000, 3100, 3200, 3300},
	};

/*
	//문제1) 각 층별 관리비 합계 ==> 1층 2층 3층 
	int a = 0; int b = 0; int c = 0;

	int floor1 = 0;
	int floor2 = 0;
	int floor3 = 0;

	while (a < 4) {
		floor1 = floor1 + pay[0][a];
		a++;
	}

	while (b < 4) {
		floor2 = floor2 + pay[1][b];
		b++;
	}

	while (c < 4) {
		floor3 = floor3 + pay[2][c];
		c++;
	}

	printf("각 층별 관리비 합계\n");
	printf("1층 : %d원", floor1); printf("\n");
	printf("2층 : %d원", floor2); printf("\n");
	printf("3층 : %d원", floor3); printf("\n");
*/

/*
	//문제2) 주소를 입력하면 관리비 출력 ==> 303 ==> 3200
	int d = 0; int e= 0; int f = 0;

	printf("주소를 입력하세요 \n");
	scanf_s("%d", &d);

	while (e < 3) {
		while (f < 4) {
			if (d == apt[e][f]) {
				printf("%d", pay[e][f]); printf("\n");
			}
			f += 1;
		}
		e += 1;
	}


	//문제3) 주소 2개를 입력하면 관리비 교환 
	int ad1 = 0; int ad2 = 0;
	int g = 0; int h = 0;
	int i = 0; int j = 0; int k = 0; int l = 0;
	int n = 0;

	printf("주소를 입력하세요(1) \n");
	scanf_s("%d", &ad1);
	printf("주소를 입력하세요(2) \n");
	scanf_s("%d", &ad2);

	while (g < 3) {
		while (h < 4) {
			if (ad1 == apt[g][h]) {
				i = g;
				j = h;
			}
			if (ad2 == apt[g][h]) {
				k = g;
				l = h;
			}
			h += 1;
		}
		g += 1;
	}

	n = pay[i][j];
	pay[i][j] = pay[k][l];
	pay[k][l] = n;
*/

	//문제4) 관리비 가장많이 나온집 출력
	int m = pay[0][0];
	int o = 0; int p = 0;
	int q = 0; int r = 0;

	while (o < 3) {
		while (p < 4) {
			if (m < pay[o][p]) {
				m = pay[o][p];
				q = o;
				r = p;
			}
			p += 1;
		}
		o += 1;
	}
	printf("%d", apt[q][r]);
}
