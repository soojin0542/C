#include <Windows.h>
#include <stdio.h>

struct Movie {
	int count;
	int mega[5];
	int seat[5];
};

void main() {
	struct Movie mega = { 0 };
	mega.count = 5;

	for (int i = 0; i < mega.count; i++) {
		mega.seat[i] = 0;
	}

	while (1) {
		printf("=== ��ȭ�� �¼����� ===\n");
		printf("1.�����ϱ�\n");
		printf("2.�����ϱ�\n");
		printf("\n");
		int choice = 0;

		printf("�޴� ���� : "); 
		scanf_s("%d", &choice);
		printf("\n");

		if (choice == 1) {
			for (int i = 0; i < mega.count; i++) {
				if (mega.seat[i] == 0) {
					printf("[X]");
				}
				else if (mega.seat[i] == 1) {
					printf("[O]");
				}
			}
			printf("\n\n");

			int idx = 0;
			printf("�¼���ȣ �Է�(1~5) : ");
			scanf_s("%d", &idx); printf("\n");
			
			if(mega.count < idx || idx < 1) {
				printf("�Է¿���"); printf("\n");
				continue;
			}
			idx --;

			if (mega.seat[idx] == 0) {
				mega.seat[idx] = 1;
			}
			else if (mega.seat[idx] == 1) {
				printf("��� �¼��� ���� �Ϸ�Ǿ����ϴ�\n");
			}
		} // if (choice == 1)

		else if (choice == 2) {
			break;
		}
	} // while (1)
}