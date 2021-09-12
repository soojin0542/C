#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 문제1) 랜덤으로 동전앞뒤면을 10번출력한다.
// 앞면과 뒷면의 갯수 출력

int main() {

	int front = 0; int back = 0;
	int coin = 10; int coin1 = rand() % 2;

	srand(time(NULL));

	while (coin == 0) {

		if (coin1 == 0) {
			printf("앞면 \n");
			front = front + 1;
			coin = coin - 1;
		}
		else {
			printf("뒷면 \n");
			back = back + 1;
			coin = coin - 1;
		}

		printf("%d, %d", front, back);
	}

}