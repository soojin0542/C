#include <Windows.h>
#include <stdio.h>
#include <time.h>

int main() {

	// ����Ų��� 31
	// p1 , p2 �� �����ư��鼭 1~3�� �Է��Ѵ�.
	// br �� p1 , p2 �� ���� ���� �����Ѵ�.
	// br �� 31 �� �Ѿ�� �������� ( �ѱ����� �й� : �¸������) 

	// p1 ==> 2  ,  br ==> 2
	// p2 ==> 3  ,  br ==> 5
	// p1 ==> 1  ,  br ==> 6  .. br > 10 ==> ���� 
	int p1 = 0; int p2 = 0; int br = 0;
	int turn = 0;
	int run = 1;

	while (run == 1) {
		if (turn == 0) {
			printf("p1) 1���� 3 ���� ���ڵ��� 1���� �Է��ϼ���. \n");
			scanf_s("%d", &p1); printf("\n");
			br = br + p1;
			turn = 1;
		}
		/*
		else if (p1 > 4) {
			printf("�ٽ� �Է����ּ��� \n");
			turn = 0;
		}
		*/
		else if (turn == 1) {
			printf("p2) 1���� 3 ���� ���ڵ��� 1���� �Է��ϼ���. \n");
			scanf_s("%d", &p2); printf("\n");
			br = br + p2;
			turn = 0;
		}
		/*
		else if (p2 > 4) {
			printf("�ٽ� �Է����ּ��� \n");
			turn = 1;
		}
		*/
		if (br >= 31) {
			if (turn == 0) {
				printf("p1�¸� \n");
			}
			else if (turn == 1) {
				printf("p2�¸� \n");
			}
			run = 0;
		}
	}
}