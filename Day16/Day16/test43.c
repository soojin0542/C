#include <Windows.h>
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	//문제1) 인덱스 2개를 입력받고 교환 
	//       1, 3   ==> 10 , 40 , 30 , 20, 50
	int i1 = 0;
	int i2 = 0;

	printf("인덱스 1을 입력하세요 ");
	scanf_s("%d", &i1);
	if (i1 >= 5 || -1 >= i1) {
		printf("수가 너무 작거나 큽니다.\n");
		printf("수 0~4중 하나를 입력해주세요..\n");
		i1 = 0;
	}

	printf("인덱스 2를 입력하세요 ");
	scanf_s("%d", &i2);
	if (i2 >= 5 || -1 >= i2) {
		printf("수가 너무 작거나 큽니다.\n");
		printf("수 0~4중 하나를 입력해주세요..\n");
		i2 = 0;
	}

	int a = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = a;

	int i = 0;
	while (i < 5) {
		printf("%d", arr[i]); printf("\n");
		i += 1;
	}
}