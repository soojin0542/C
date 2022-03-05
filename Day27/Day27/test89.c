#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
struct Question {
	char question[100];
	char item1[100];
	char item2[100];
	char item3[100];
	char item4[100];
	int solution;
};
struct Question bank[100] = {
	{"서로 다른 자료형을 모을수 있는 구조는?",
	 "1.배열", "2.변수", "3.구조체", "4.포인터"}
};

int main() {
	int i = 0;
	for (i = 0; i < 2; i++) {
		int select = 0;
		printf("%s  ", bank[i].question);
		printf("%s  ", bank[i].item1);
		printf("%s  ", bank[i].item2);
		printf("%s  ", bank[i].item3);
		printf("%s   : ", bank[i].item4);
		scanf("%d", &select);
		if (select == 3) {
			printf("맞았습니다");
			break;
		}
		else {
			printf("틀렸습니다");
		}
	}
}
*/
/*
int main() { 
	//텍스트를 입력받아 소문자를 모두 대문자로 바꿔 출력
	char alphabet[100]; int i;
	printf("대문자 변환기\n");
	printf("소문자를 입력하세요 : ");
	scanf("%s", &alphabet);
	for (i = 0; i < strlen(alphabet); i++) {
		alphabet[i] = toupper(alphabet[i]);
	}
	printf("출력 : %s", alphabet);
}
*/
/*
void main() {
	//배열에 입력된 모음 전부 삭제
	char gather[100];
	int i, j;
	printf("텍스트 입력 : ");
	scanf("%s", gather);

	for (i = 0; gather[i]; i++) {
		if (gather[i] == 'a' ||
			gather[i] == 'e' ||
			gather[i] == 'i' ||
			gather[i] == 'o' ||
			gather[i] == 'u') {
			for (j = i; gather[j]; j++) {
				gather[j] = gather[j + 1];
			}
		}
		else if (
			gather[i] == 'A' ||
			gather[i] == 'E' ||
			gather[i] == 'I' ||
			gather[i] == 'O' ||
			gather[i] == 'U') {
			for (j = i; gather[j]; j++) {
				gather[j] = gather[j + 1];
			}
		}
		printf("최종 텍스트 : %s\n", gather);
		return 0;
	}
}
*/
/*
void main() {
	//철자교정 프로그램
	//1.문장의 끝에 마침표 여부 확인
	//없으면 넣어준다

	//2.문자열의 첫번째가 대문자인지 검사
	//아니라면 대문자로 변환

	//예) hello -> Hello.
	char a[100] = 

	printf("텍스트를 입력하세요 : ");
	scanf("")
}
*/