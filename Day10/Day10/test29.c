#include <stdio.h>
#include <Windows.h>

int main() {
	// 택시 게임
	// 1.전진 ==> 방향으로 속도만큼 이동 
	// 2.회전 ==> 북 동 남 서  ==> 0 , 1 , 2 , 3
	// 3.속도 ==> 0~3 사이로 이동 

	int money = 1000;
	int x = 5; int y = 5;
	int speed = 0;
	int dir = 0;
	int dx = 7;
	int dy = 1;
	int run = 1;

	while (run == 1) {
		system("cls"); // 화면클리어
		printf("[수입] %d", money);					 printf("\n");
		printf("[현위치] x : %d, y : %d", x, y);		 printf("\n");
		printf("[속도] %d, [방향] %d ", speed, dir);  printf("\n");
		printf("[목적지] dx : %d, dy : %d", dx, dy);  printf("\n");
		printf("1.전진 2.회전 3.속도조절 \n");

		int sel; scanf_s("%d", &sel);
		if (sel == 1) {
			printf("0) 북 , 1) 동 , 2)남 , 3)서 \n");
			scanf_s("%d", &dir);
		}
		else if (sel == 3) {
			printf("속도를 입력하세요 (0~3)");
			scanf_s("%d", &speed);
		}
	}
}