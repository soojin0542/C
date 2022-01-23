#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//문자열 = 문자로 된 배열
//typedef struct student {
//	char a[15];
//	char b[15];
//	char c[15];
//}student;
//
//int main() {
//	student x;
//	strcpy(x.a, "220122");
//	strcpy(x.b, "한수진");
//	strcpy(x.c, "12345678");
//
//	printf("주민등록번호 : %s\n", x.a);
//	printf("이름 : %s\n", x.b);
//	printf("전화번호 : %s\n", x.c);
//}

typedef struct book {
	int bknum;
	char bkname[20];
	char bkator[50];
	char bknew[50];
	int bkhave;
}bk;

void main() {
	bk x;
	int sel = 0;
	int a = 1;
	char bklist1[30] = { 'h', 'e', 'l', 'l', 'o', ',', 'w', 'o', 'r', 'l', 'd'};
	char bklist2[30] = { 'm', 'i', 'n', 'e' };
	char bklist3[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	char bklist4[30] = { 'h', 'm', 'm'};
	char bklist5[30] = { 'h', 'e', 'l', 'l', 'o' };

	while (a) {
		printf("======================================");
		printf("1. 도서번호로 책 찾기\n");
		printf("2. 저자 이름으로 책 찾기\n");
		printf("3. 제목으로 책 찾기\n");
		printf("4. 새로운 책 추가\n");
		printf("5. 도서관 소장 도서 수 표시\n");
		printf("======================================");
		printf("메뉴 선택");
		scanf_s("%d", sel);

		if (sel >= 6) {
			printf("다시 입력해주세요");
		}
		else {
			if (sel == 1) {
				
			}

			if (sel == 2) {

			}

			if (sel == 3) {

			}

			if (sel == 4) {

			}

			if (sel == 5) {

			}
		}
	}//while (a)
}