#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// ����1) �������� �����յڸ��� 10������Ѵ�.
// �ո�� �޸��� ���� ���

int main() {

	int front = 0; int back = 0;
	int coin = 10; int coin1 = rand() % 2;

	srand(time(NULL));

	while (coin == 0) {

		if (coin1 == 0) {
			printf("�ո� \n");
			front = front + 1;
			coin = coin - 1;
		}
		else {
			printf("�޸� \n");
			back = back + 1;
			coin = coin - 1;
		}

		printf("%d, %d", front, back);
	}

}