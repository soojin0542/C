#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

struct ATM {
	int accs;
	int count;
	int login;
	int moneys[3];
	int c[3];
};

void main() {
	struct ATM atm = { 0 };
	atm.c[0] = 1111;	atm.moneys[0] = 1000;
	atm.c[1] = 2222;	atm.moneys[1] = 2000;
	atm.c[2] = 3333;	atm.moneys[2] = 3000;

	int sel = 0;
	int a = 0;
	int check = -1;
	
	while (1) {
		printf("\n1.�α���\n");
		printf("2.�α׾ƿ�\n");
		printf("3.��ü�ϱ�\n");
		printf("4.ȸ������\n");
		printf("5.Ż���ϱ�\n");
		printf("6.�����ϱ�\n");
		scanf("%d", &sel);

		if (sel == 1) {
			if (atm.login == -1) {
				printf("�α��� �� �̿밡��\n");
			}
			else {
				printf("�α��� �� ���¹�ȣ �Է�\n");
				scanf("%d", &a);

				for (int i = 0; i < atm.count; i++) {
					if (atm.c[i] == a) {
						check = i;
						atm.login = a;
					}
					else {
						printf("�߸��� ��ȣ �Է�\n");
						break;
					}
				}
			}
			
		}

		if (sel == 2) {
			if (atm.login == -1) {
				printf("�α��� �� �̿밡��\n");
			}
			atm.login = -1;
			printf("�α׾ƿ� �Ǿ����ϴ�.\n");
		}

		if (sel == 3) {
			if (atm.login == -1) {
				printf("�α��� �� �̿밡��\n");
			}

			int b = 0;
			int c = 0;
			printf("��ü�� ��ȣ �Է�\n");
			scanf("%d", &b);
			atm.c[b];

			if (b != a) {
				printf("��ü�� �ݾ� �Է�\n");
				scanf("%d", &c);
				if (atm.moneys[a] > c) {
					atm.moneys[b] = atm.moneys[b] + c;
					atm.moneys[c] = atm.moneys[c] - c;
				}
				else {
					printf("�ܾ��� �����մϴ�\n");
				}
			}
			printf("��ü�� �Ϸ�Ǿ����ϴ�\n");
		}

		if (sel == 4) {
			if (atm.login == -1) {
				printf("�α��� �� �̿밡��\n");
			}

			int d = 0;
			check = 1;
			printf("������ ���¹�ȣ�� �Է��ϼ��� : \n");
			scanf("%d", &d);
			for (int i = 0; i < atm.count; i++) {
				if (atm.c[i] == d) {
					check = -1;
				}
			}

			if (check == -1) {
				printf("���¹�ȣ�� �ߺ��˴ϴ�.\n");
			}
			else {
				atm.count += 1;
				atm.c[atm.count] = d;
				atm.moneys[atm.count] = 0;
				printf("ȸ�������� �����մϴ�.\n");
			}
		} 

		if (sel == 5) {
			if (atm.login == -1) {
				printf("�α��� �� �̿밡��\n");
			}
			atm.count -= 1;
			atm.login = -1;
			printf("Ż��Ǿ����ϴ�.\n");
		}

		if (sel == 6) {
			break;
		}
	} // while (1)
}
