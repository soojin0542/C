#include <stdio.h>
int main() {

	// 문제 1) 숫자를 하나 입력받고 아래 배열을 앞으로 하나씩 밀어낸후 맨뒤에 저장
	//int a[5] = { 10,20,30,40,50 };
	// 예)  60 ==> a[5] = {20,30,40,50,60};
/*
	int i = 0; int d = 0;
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &d);

	while (i < 5) {
		
		if (i == 4) {
			a[i] = d;
		}
		else {
			a[i] = a[i + 1];
		}
		
		i += 1;
	}
	i = 0;
	while (i < 5) {
		printf("[%d] ", a[i]);
		i += 1;
	}
*/

	// 문제 2) 숫자를 하나 입력받고 아래 배열을 뒤로 하나씩 밀어낸후 맨 앞에 저장 
	int b[5] = { 10,20,30,40,50 };
	int a[5] = { 0,0,0,0,0 };
	// 예) 60 ==> b[5] = {60,10,20,30,40};
	int i = 0; int f = 0; int c = 1; int su = 0;
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &f);
	while (i < 5) {
		a[i] = b[i];
		i++;
	}
	i = 0;
	while (i < 5) {
		if (i == 0) {
			b[i] = f;
		}
		else {
			b[i] = a[i-1];
		}
		printf("[%d] ", b[i]);
		i += 1;
	}







}