#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>


//���ڿ� = ���ڷ� �� �迭
struct student {
	char a[15];
	char b[15];
	char c[15];
};

int main() {
	struct student x;
	strcpy(x.a, "220122");
	strcpy(x.b, "�Ѽ���");
	strcpy(x.c, "12345678");

	printf("�ֹε�Ϲ�ȣ : %s\n", x.a);
	printf("�̸� : %s\n", x.b);
	printf("��ȭ��ȣ : %s\n", x.c);
}