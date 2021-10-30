#include <Windows.h>
#include <stdio.h>

int main() {

	// 숫자 야구 게임
	// 0~9사이의 숫자 3개를 me 에 입력받는다.(중복금지)
	// com 과 me 를 비교해서 com의 숫자를 맞출때까지반복
	// com 은 비교결과를 힌트로 준다.
	// 숫자와 자리가같으면 strike += 1;
	// 남은수중에서 숫자만 같고 자리가 틀리면 ball += 1;
	// 예) 1 , 3, 7 ==> 1s, 1b
	// 예) 3, 2, 4  ==> 1s 
	int com[3] = { 3, 0, 7 };
	int me[3] = { 0, 0, 0 };
	int ball = 0;
	int strike = 0;

	int a = 0;
	while (a < 3) {
		printf("0~9사이의 숫자를 겹치치 않게 입력하세요.\n");
		scanf_s("%d", &me[a]); printf("\n");
		a += 1;
	}


	int b = 0;
	while (b < 3) {
		int c = 0;
		while (c < 3) {
			if (com[b] == me[c]) {
				if (b == c) {
					strike += 1;
				}
				else {
					ball += 1;
				}
			}
			c += 1;
		}
		b += 1;
	}
	
	printf("결과\n");
	printf("스트라이크 : %d개", strike); printf("\n");
	printf("볼 : %d개", ball); printf("\n");

}