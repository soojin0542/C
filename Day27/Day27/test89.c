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
		printf("%s\n", bank[i].question);
		printf("%s	", bank[i].item1);
		printf("%s	", bank[i].item2);
		printf("%s  ", bank[i].item3);
		printf("%s : ", bank[i].item4);
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
int main() { //미완
	char alphabet[100];
	printf("대문자 변환기\n");
	printf("소문자를 입력하세요 : ");
	scanf("%s", &alphabet);
	for (int i = 0; i < 100; i++) {
		toupper(alphabet[i]);
		printf("%c",alphabet[i]);
	}
}
*/

void main() {
	//배열에 입력된 모음을 전부 삭제
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

/*
int main() {
	char str[100];
	int i, j;
	printf("텍스트를 입력한다 : ");
	scanf("%s", str);

	for (i = 0; str[i]; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			for (j = i; str[j]; j++) {
				str[j] = str[j + 1];
			}
		}
		else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			for (j = i; str[j]; j++) {
				str[j] = str[j + 1];
			}
		}
	}
	printf("최종 텍스트 : %s\n", str);
	return 0;
}
*/