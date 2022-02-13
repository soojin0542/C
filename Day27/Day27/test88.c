#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
void main() {
	int student[3][3] = {
	{30, 10, 11},
	{40, 90, 32}, 
	{70, 65, 56} };

	for (int i = 0; i < 3; i++) {
		printf("%d번 학생 평균 : %d\n\n", i+1 , (student[i][0] + student[i][1] + student[i][2]) / 3);
	}
}
*/
/*
void main() {
	srand(time(NULL));
	int a[10] = { 0 };
	int b = 0;
	int c = 0;
	int d = 0;

	while (b<100) {
		a[rand() % 10] += 1;
		b++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (c < a[i]) {
			c = a[i];
			d = i;
		}
	}
	printf("가장 많이 생성된 수 : %d (%d개)", d, c);
}
*/
/*
void main() {
	//주사위를 60000번 던져서 결과를 출력()
	srand(time(NULL));
	int a[7] = { 0 };

	for (int i = 1; i <= 60000; i++) {
		a[rand() % 6 + 1]++; // 1~6
	}

	printf("================================\n");
	printf("주사위면	빈도\n");
	printf("================================\n");
	for (int i = 0; i < 6; i++){
		printf("  %d		%d\n", i + 1, a[i + 1]);
	}	
}
*/