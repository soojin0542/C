#include <Windows.h>
#include <stdio.h>

int main() {
	// 1 ==> �÷��̾�
	// 2 ==> ��
	// 0 ==> ��

	// 1) 1�� ������ �������� �̵� 
	// 2) 2�� ������ �����������̵� 
	// 3) ���� �����������Ѵ�.

	int game[9] = { 2, 0, 0, 0, 0, 0, 1, 0, 2 };

	int player = 0;
	for (int i = 0; i < 9; i++) {
		if (game[i] == 1) {
			player = i;
		}
	}

	while (1) {
		int i = 0;
		while (i < 9) {
			if (game[i] == 0) {
				printf("__");
			}
			else if (game[i] == 1) {
				printf("��");
			}
			else if (game[i] == 2) {
				printf("[]");
			}
			i = i + 1;
		}
		printf("\n");

		printf("[1.������] [2.����]\n");
		printf("���ڸ� �Է��ϼ��� : ");
		int move = 0;
		scanf_s("%d", &move);

		if (move == 1) {
			printf("�������� �̵��Ѵ�.\n\n");
			if (player - 1 >= 0) {
				if (game[player - 1] == 2) {
					printf("���̴�. �������� ���ҰͰ���.\n");
					printf("�ٸ� ���� ã�ƺ���?\n\n");
					continue;
				}
				game[player] = 0;
				player -= 1;
				game[player] = 1;
			}
		}

		else if (move == 2) {
			printf("���������� �̵��Ѵ�.\n\n");
			if (player + 1 < 9) {
				if (game[player + 1] == 2) {
					printf("���̴�. �������� ���ҰͰ���.\n");
					printf("�ٸ� ���� ã�ƺ���?\n\n");
					continue;
				}
				game[player] = 0;
				player += 1;
				game[player] = 1;
			}
		}

		else {
			printf("�߸��� �Է��ΰͰ���. �ٽ� �Է��غ���.\n\n");
		}
	}
}