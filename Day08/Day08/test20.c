#include <Windows.h>
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(0));
	// ���� 1) �����л����� 

	// ���� 1) �����л� ���� ==> 3�� �� �������� 0~100���� ���
	// ���� 2) ��ȣ�� 1000 ~ 1002 ���� ��� 
	// ���� 3) 1����� 

	//rand() %���� + ���ۼ���

	int max = 0; int max_num = 0;

	for (int i = 1000; i < 1003; i++) {
		int score = rand() % 101;
		printf("%d : %d", i, score); printf("\n");

		if (max < score) {
			max = score;
			max_num = i;
		}
	}
	printf("1�� : %d  :  %d", max_num, max); printf("\n");
}