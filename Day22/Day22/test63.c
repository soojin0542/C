#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

void grade(int* p) {
	//�л� 5���� ������ ���������� �迭�� ����
	//���� ���
	srand(time(0));
	int a[5] = { rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1,
				 rand() % 100 + 1 };
	int b = 0; int c = 0;
	
	
	
	
}


int main() {
	int i = 0;
	int g = 0;
	grade(&g);

	for (i = 0; i < 5; i++) {
		printf("%d", g[i]);
	}
}