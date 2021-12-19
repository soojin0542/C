#include <stdio.h>
#include <Windows.h>

struct User {
	int num;
	int score;
};

void main() {
	struct User user = { 0 };
	user.num = 1;
	user.score = 10;

	struct User user2 = { 0 };
	user2.num = 2;
	user2.score = 20;

	struct User user3 = { 0 };
	user3.num = 3;
	user3.score = 30;

//--------------------------------//

	struct User list[3] = { 0 };
	
	list[0].num = 1;
	list[0].score = 10;

	list[1].num = 2;
	list[1].score = 20;

	list[2].num = 3;
	list[2].score = 30;

	for (int i = 0; i < 3; i++) {
		printf("학번 : %d  점수 : %d", list[i].num, list[i].score);
		printf("\n");
	}
}