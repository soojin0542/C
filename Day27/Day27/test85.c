#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>


//문자열 = 문자로 된 배열
struct student {
	char a[15];
	char b[15];
	char c[15];
};

int main() {
	struct student x;
	strcpy(x.a, "220122");
	strcpy(x.b, "한수진");
	strcpy(x.c, "12345678");

	printf("주민등록번호 : %s\n", x.a);
	printf("이름 : %s\n", x.b);
	printf("전화번호 : %s\n", x.c);
}