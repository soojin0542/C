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
	bk x[5] = {
		{1,"Hello, world", "wi jung"},
		{2, "mine", "hwe yong kim"},
		{3, "abcdefg", "soyong"},
		{4, "hmm", "woo ri han"},
		{5, "latata", "eun jeong jo"} };
	int sel = 0;
	int a = 1;

	while (a) {
		sel = 0;
		printf("======================================\n");
		printf("1. 도서번호로 책 찾기\n");
		printf("2. 저자 이름으로 책 찾기\n");
		printf("3. 제목으로 책 찾기\n");
		printf("4. 새로운 책 추가\n");
		printf("5. 도서관 소장 도서 수 표시\n");
		printf("6.종료\n");
		printf("======================================\n");
		printf("메뉴 선택 : ");
		scanf_s("%d", &sel);
		

		if (sel >= 6) {
			printf("다시 시도해주세요\n");
		}
		else {
			if (sel == 1) {
				sel = 0;
				printf("\n도서번호를 입력해주세요\n");
				scanf_s("%d", &sel);
				printf("%s", x[0]);
			}

			if (sel == 2) {
				sel = 0;
				printf("\n저자 이름을 입력해주세요\n");
				scanf_s("%d", &sel);
				
				printf("%s", sel);
			}

			if (sel == 3) {
				sel = 0;
				printf("\n책 제목을 입력해주세요\n");
			}

			if (sel == 4) {
				sel = 0;
				printf("\n새로운 책 추가\n");
				scanf_s("%d", &sel);
			}

			if (sel == 5) {
				sel = 0;

			}
			if (sel == 6) {
				a = 0;
				break;
			}
		}
	}//while (a)
}