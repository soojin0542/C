#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
for (int i = 'A'; i <= 'F'; i++) {
		printf("%d : %c\n", i, i);
	} // 아스키코드로 A는 65다. A(65)다음은 B(66) 이고,
	// A(65) + 1 == B(66) 이므로 아스키코드를 사용하면 숫자로
	//문자 출력이 가능하다. 참고로 A는 65고 a는 97이다.
	printf("%d", 'A'); //를 출력하면 65가 나온다.
*/

int main(void) {
	/*int i;
	char codes[size];

	for (i = 0; i < size; i++) 
		codes[i] = 'a' + i;
		
	for (i = 0; i < size; i++)
		printf("%c ", codes[i]);
	printf("\n");
	
	return 0;*/
	
		/*
	int scores[5];
	int sum = 0;
	int i, average;

	for (int i = 0; i < 5; i++) {
		printf("학생들의 성적을 입력하세요 : ");
		scanf("");
	}

	int a[6];
	for (int i = 0; i < 6; i++) {
		a[i] = 1+i;
		printf("%d ", a[i]);
	}


	//출석부 만들기
	int a = 1;
	int b = 0;
	int c = 0;
	int i = 1;
	int j = 1;
	int score = 0;
	int book[10] = { 0 };
		
	for (i = 1; i <= 3; i++) {
		printf("%d번 학생 정보입력\n", i);
		printf("%d번째 강의에 출석하셨나요?(했다면 1, 아니라면 2)\n", a);
		scanf("%d", &score); printf("\n");

		if (score == 1) {
			book[i] += 1;
			score++;
		}
		else {
			score++;
		}
		
		while (c < 3) {
			if (book[i] <= 3) {
				printf("%d번 학생의 수업 일수가 부족합니다(총 수업일수 : 3일 | 총 출석수 : %d일)\n\n", c, book[i]);
				return 0;
			}
			else {
				printf("%d번 학생의 수업 일수가 충분합니다(총 수업일수 : 3일 | 총 출석수 : %d일)\n\n", c, book[i]);
			}
			c++;
		}
	} // for (i = 1; i <= 3; i++)
	*/
}