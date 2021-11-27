#include <Windows.h>
#include <stdio.h>

//��ȭ�� �¼�����[�Լ��� ����]

void print_menu() {
	printf("=== ��ȭ�� �¼����� ===\n");
	printf("1.�����ϱ�\n");
	printf("2.�����ϱ�\n");
}


int sel_menu() {
	int choice = 0;

	printf("�޴� ���� : ");
	scanf_s("%d", &choice);

	if (2 < choice || choice < 0) {
		printf("�Է¿���\n");
	}
	return choice;
}


void  print_seat(int* p, int count) {
	for (int i = 0; i < count; i++) {
		if (p[i] == 0) {
			printf("[X]");
		}
		else {
			printf("[O]");
		}
	}
	printf("\n");
}


int sel_seat(int* p, int count) {
	int idx = 0;
	printf("�¼�����(1~5) : ");
	scanf_s("%d", &idx);
	idx -= 1;
	printf("\n");

	int check = idx;
	if (count - 1 < idx || idx < 0) {
		check -= 1;
	}
	return check;
}


void run(int* p, int count) {
	int a = 1;
	while (a) {
		print_menu();

		int choice = sel_menu();
		if (choice == 1) {
			print_seat(p, count);
			int idx = sel_seat(p, count);
		
			if (idx == -1){
				printf("�Է¿���\n");
				continue;
			}

			if (p[idx] == 0) {
				p[idx] = 1;
			}
			else if (p[idx] == 1) {
				printf("�ش� ��ġ�� ������ �� �����ϴ�.\n\n");
			}
			else {
				printf("�Է¿���\n");
			}

		} // if (choice == 1)

		else if (choice == 2) {
			break;
		}
	}
}


void main() {
	int count = 5;
	int seat[5] = { 0 };

	run(&seat[0], count);
}