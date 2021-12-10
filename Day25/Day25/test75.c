#include <stdio.h>
#include <Windows.h>

/*
	# ATM[�Լ��� ����]
	1. ȸ������
	2. �α���				: �α��ΰ� ���ÿ� ���� �޴��� �̵��ϱ�
	3. ����
	------------------
	1. �Ա�
	2. ���
	3. ��ü
	4. Ż��					: �α׾ƿ��� �Բ� �ڷΰ���
	5. �α׾ƿ�				: �α׾ƿ��� �Բ� �ڷΰ���
*/

void print_info(int* accs, int* moneys, int count);
int check_acc(int* accs, int acc, int count);
int member(int* accs, int* moneys, int count);
int login_check(int* accs, int login, int count);
int income();
int accss(int* accs, int count);
void withdraw(int* accs, int* moneys, int login, int count);
void outcome(int* moneys, int login);
int del(int* accs, int* moneys, int login, int count);
int run(int* accs, int* moneys, int count);


void main() {
	int count = 3;
	int accs[5] = { 1111, 2222, 3333, 0, 0 };
	int moneys[5] = { 1000, 2000, 3000, 0, 0 };

	count = run(&accs[0], &moneys[0], count);
}


void print_info(int* accs, int* moneys, int count) {
	printf("=== ȸ������[%d��] ===\n\n", count);
	for (int i = 0; i < count; i++) {
		printf("%d. %d : %d��\n", (i + 1), accs[i], moneys[i]);
	}
	printf("\n");
}


int check_acc(int* accs, int acc, int count) {
	int check = 1;
	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			check = -1;
		}
	}
	return check;
}


int member(int* accs, int* moneys, int count) {
	printf("=== ȸ������ ===\n");

	int acc = 0;
	printf("���¹�ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &acc);

	int check = check_acc(accs, acc, count);

	if (check == -1) {
		printf("���¹�ȣ�� �ߺ��˴ϴ�.\n\n");
	}
	else {
		accs[count] = acc;
		moneys[count] = 1000;
		printf("ȸ�������� �����մϴ�.\n\n");
		count += 1;
	}
	return count;
}


int login_check(int* accs, int login, int count) {
	printf("=== �α��� ===\n");
	int acc = 0;
	printf("���¹�ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &acc);

	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			login = i;
		}
	}
	return login;
}


int income() {
	printf("=== �Ա� ===\n");
	int money = 0;
	printf("�Ա��� �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &money);

	return money;
}


void outcome(int* moneys, int login) {
	printf("=== ��� ===\n");
	int money = 0;
	printf("����� �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &money);

	if (moneys[login] >= money) {
		moneys[login] -= money;
		printf("����� �Ϸ��Ͽ����ϴ�.\n");
	}
	else {
		printf("�����ܾ��� �����մϴ�.\n");
	}
}


int accss(int* accs, int count) {
	int acc = 0;
	printf("��ü�� ���¹�ȣ�� �Է��ϼ��� ; ");
	scanf_s("%d", &acc);

	int check = -1;
	for (int i = 0; i < count; i++) {
		if (accs[i] == acc) {
			check = i;
		}
	}
	return check;
}


void withdraw(int* accs, int* moneys, int login, int count) {
	printf("=== ��ü ===\n");
	int check = check_acc(accs, moneys, login);
	int money = 0;
	int move = 0;

	if (check == -1) {
		printf("���¹�ȣ�� Ȯ�����ּ���.\n");
	}

	else {
		
		printf("��ü�� �ݾ��� �Է��ϼ��� : ");
		scanf_s("%d", &money);

		if (moneys[login] >= money) {
			moneys[check] += money;
			moneys[login] -= money;
			
			printf("��ü�� �� ȸ���� �Է��ϼ��� : \n");
			scanf_s("")
			printf("��ü�� �Ϸ��Ͽ����ϴ�.\n");
		}

		else {
			printf("�����ܾ��� �����մϴ�.\n");
		}
	}
}


int del(int* accs, int* moneys, int login, int count) {

	for (int i = login; i < count - 1; i++) {
		accs[i] = accs[i + 1];
		moneys[i] = moneys[i + 1];
	}
	printf("Ż��Ǿ����ϴ�.\n");

	count -= 1;
	return count;
}


int run(int* accs, int* moneys, int count) {

	while (1) {

		print_info(accs, moneys, count);

		printf("1.ȸ������\n");
		printf("2.�α���\n");
		printf("3.����\n");

		int login = -1;					// �α׾ƿ�(-1)

		int sel = 0;
		printf("�޴� ���� : ");
		scanf_s("%d", &sel);

		if (sel == 1) {
			count = member(accs, moneys, count);
		}


		else if (sel == 2) {
			login = login_check(accs, login, count);
			if (login == -1) {
				printf("���¹�ȣ�� Ȯ�����ּ���.\n");
			}
			else {
				while (1) {

					print_info(accs, moneys, count);

					printf("1.�Ա�\n");
					printf("2.���\n");
					printf("3.��ü\n");
					printf("4.Ż��\n");
					printf("5.�ڷ� ����\n");

					int choice = 0;
					printf("�޴� ���� : \n");
					scanf_s("%d", &choice);

					if (choice == 1) {
						moneys[login] += income();
						printf("�Ա��� �Ϸ��Ͽ����ϴ�.\n");
					}
					else if (choice == 2) {
						outcome(moneys, login);
					}
					else if (choice == 3) {
						withdraw(accs, moneys, login, count);
					}
					else if (choice == 4) {
						count = del(accs, moneys, login, count);
						login = -1;
						break;
					}
					else if (choice == 5) {
						return choice;
					}
				}
			}
		}
		else if (sel == 3) {
			break;
		}
	}
	return count;
}