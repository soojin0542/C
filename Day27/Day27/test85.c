#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//���ڿ� = ���ڷ� �� �迭
//typedef struct student {
//	char a[15];
//	char b[15];
//	char c[15];
//}student;
//
//int main() {
//	student x;
//	strcpy(x.a, "220122");
//	strcpy(x.b, "�Ѽ���");
//	strcpy(x.c, "12345678");
//
//	printf("�ֹε�Ϲ�ȣ : %s\n", x.a);
//	printf("�̸� : %s\n", x.b);
//	printf("��ȭ��ȣ : %s\n", x.c);
//}

typedef struct book {
	int bknum;
	char bkname[20];
	char bkator[50];
	char bknew[50];
	int bkhave;
}bk;

void main() {
	bk x;
	int sel = 0;
	int a = 1;
	char bklist1[30] = { 'h', 'e', 'l', 'l', 'o', ',', 'w', 'o', 'r', 'l', 'd'};
	char bklist2[30] = { 'm', 'i', 'n', 'e' };
	char bklist3[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	char bklist4[30] = { 'h', 'm', 'm'};
	char bklist5[30] = { 'h', 'e', 'l', 'l', 'o' };

	while (a) {
		printf("======================================");
		printf("1. ������ȣ�� å ã��\n");
		printf("2. ���� �̸����� å ã��\n");
		printf("3. �������� å ã��\n");
		printf("4. ���ο� å �߰�\n");
		printf("5. ������ ���� ���� �� ǥ��\n");
		printf("======================================");
		printf("�޴� ����");
		scanf_s("%d", sel);

		if (sel >= 6) {
			printf("�ٽ� �Է����ּ���");
		}
		else {
			if (sel == 1) {
				
			}

			if (sel == 2) {

			}

			if (sel == 3) {

			}

			if (sel == 4) {

			}

			if (sel == 5) {

			}
		}
	}//while (a)
}