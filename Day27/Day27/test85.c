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
	bk x[5] = {
		{1,"Hello, world", "wi jung"},
		{2, "mine", "hwe yong kim"},
		{3, "abcdefg", "soyong"},
		{4, "hmm", "woo ri han"},
		{5, "latata", "eun jeong jo"} };
	int sel = 0;
	int a = 1;

	while (a) {
		sel = 0;
		printf("======================================\n");
		printf("1. ������ȣ�� å ã��\n");
		printf("2. ���� �̸����� å ã��\n");
		printf("3. �������� å ã��\n");
		printf("4. ���ο� å �߰�\n");
		printf("5. ������ ���� ���� �� ǥ��\n");
		printf("6.����\n");
		printf("======================================\n");
		printf("�޴� ���� : ");
		scanf_s("%d", &sel);
		

		if (sel >= 6) {
			printf("�ٽ� �õ����ּ���\n");
		}
		else {
			if (sel == 1) {
				sel = 0;
				printf("\n������ȣ�� �Է����ּ���\n");
				scanf_s("%d", &sel);
				printf("%s", x[0]);
			}

			if (sel == 2) {
				sel = 0;
				printf("\n���� �̸��� �Է����ּ���\n");
				scanf_s("%d", &sel);
				
				printf("%s", sel);
			}

			if (sel == 3) {
				sel = 0;
				printf("\nå ������ �Է����ּ���\n");
			}

			if (sel == 4) {
				sel = 0;
				printf("\n���ο� å �߰�\n");
				scanf_s("%d", &sel);
			}

			if (sel == 5) {
				sel = 0;

			}
			if (sel == 6) {
				a = 0;
				break;
			}
		}
	}//while (a)
}