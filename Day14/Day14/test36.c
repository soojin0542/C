#include <Windows.h>
#include <stdio.h>

int main() {

	int lotto[] = { 3, 0, 3, 3, 3, 3, 0 };
	// ����) �� ������ ��÷���� �ƴ��� ��� 
	// ����) 3�� �������� 3���̻��̸� ��÷ 

	int i = 0;
	int win = 0;

	for (int i = 0; i < 5; i++) {
		if (lotto[i] == 3 && lotto[i + 1] == 3 && lotto[i + 2] == 3) {
			win = 1;
		}
	}

	if (win == 1) {
		printf("��÷");
	}
	else {
		printf("��");
	}
}