#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(0));

	int omr[] = { 1, 5, 3, 2, 5 }; // ��� ���
	int me[5] = { 0 };			 // �л� ���

	//����1) me�� 1~5 ������ ���� ���ڸ� 5�� ���� ��,
	//       omr�� ���Ͽ� ������� (1������ 20��)
	int score = 0;
	int i;
	srand(time(NULL));
	
	for (i = 0; i < 5; i++) {
		me[i] = rand() % 5 + 1;
		printf("%d\n", me[i]);
	}


	//����2) ������ "o", Ʋ���� "x" ��� 
	
}