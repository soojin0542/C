#include <Windows.h>
#include <stdio.h> 

/*
	# ATM
	[1] �α���
		. ���¹�ȣ�� ��й�ȣ�� �Է¹޾� �α��� ó��
		. �α��� ��, �� �α��� �Ұ�
	[2] ��ü
		. �α��� ��, �̿밡��
	[3] �α׾ƿ�
		. �α��� ��, �̿밡��
*/

int main() {

	int account[4] = { 1111, 2222, 3333, 4444 };
	int password[4] = { 1234, 2345, 3456,4567 };
	int balance[4] = { 5000, 6000, 7000, 8000 };

	int money1 = 10000;
	int login = -1;
	int run = 1;

	while (run == 1) {
		printf("1. �α���\n");
		printf("2. ��ü\n");
		printf("3. �α׾ƿ�\n");
		printf("4. �ý��� ����\n");

		printf("�޴��� �����ϼ��� : \n\n");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (login == -1) {
				printf("���¹�ȣ�� �Է����ּ��� : ");
				int my_acc = 0;
				scanf_s("%d", &my_acc);

				printf("��й�ȣ�� �Է����ּ��� : ");
				int my_pw = 0;
				scanf_s("%d", &my_pw);

				for (int i = 0; i < 4; i++) {
					if (my_acc == account[i] && my_pw == password[i]) {
						login = i;
					}
				}

				if (login == -1) {
					printf("���¹�ȣ�� Ȯ�����ּ���.\n\n");
				}
				else {
					printf("[�޼���]%d��, ȯ���մϴ�.\n", account[login]);
				}
			}

			else {
				printf("[�޼���]�α׾ƿ� �� �̿����ּ���.\n\n");
			}
		}

		else if (sel == 2) {
			if (login != -1) {
				printf("�ܾ� : %d��\n", money1);
				printf("[��ü]���¹�ȣ�� �Է��ϼ��� : ");
				int acc = 0;
				scanf_s("%d", &acc);

				int index = -1;
				for (int i = 0; i < 4; i++) {
					if (account[i] == acc) {
						index = i;
					}
				}
				if (index == -1) {
					printf("���¹�ȣ�� Ȯ�����ּ���.\n");
				}
				else {
					printf("��ü�ݾ��� �Է��ϼ��� : ");
					int money = 0;
					scanf_s("%d", &money);

					if (money <= balance[login]) {
						balance[login] -= money1;
						balance[index] += money1;
						printf("��ü�� �Ϸ��Ͽ����ϴ�.\n");
						printf("��ü�ݾ� : %d��\n\n", money1 - money);
					}
					else {
						printf("�ܾ��� �����մϴ�.\n\n");
					}
				}
			}
			else {
				printf("[�޼���]�α��� �� �̿밡���մϴ�.\n\n");
			}
		}

		else if (sel == 3) {
			if (login != -1) {
				login = -1;
				printf("[�޼���]�α׾ƿ� �Ǿ����ϴ�.\n\n");
			}
			else {
				printf("[�޼���]�α��� �� �̿밡���մϴ�.\n\n");
			}
		}

		else if (sel == 4) {
			run = 0;
		}
	}
}