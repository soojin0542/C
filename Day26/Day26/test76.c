#include <Windows.h>
#include <stdio.h>

// # ����ü (��������� �ڷ��� : ���� �ڷ����� �����ؼ� �����.)
// 1) ���� ==> ������
//      [1] struct : Ű����
//      [2] User   : ����ü �̸�(�������� �ڷ����̶������ϸ�ȴ�)
//      [3] {};    : ���� (Ư���ϰ� ; ���� �������Ѵ�)

// 2) ����
//      [1] User user;  // int a; �� ����ϴ�.

// 3) ��� 
//      [1] user.num = 1001;  // . ���� ���� ������ �����Ѵ�.

struct User {
	int num;
	int score;
};

void main() {
	struct User user = { 0 };
	user.num = 1;
	user.score = 30;
	printf("�й� : %d,\n����:%d\n", user.num, user.score);

	printf("\n");

	struct User user2 = { 0 };
	user2.num = 2;
	user2.score = 60;
	printf("�й� : %d,\n����:%d\n", user2.num, user2.score);

}