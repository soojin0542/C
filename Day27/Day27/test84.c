#include <Windows.h>
#include <stdio.h>

/*
	# ATM[����ü(����) ����]
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

struct Client {
	int accs;
	int moneys;
};

struct ATM {
	int count;
	int login;
	struct Client* c;
};

void main() {

	struct ATM atm = { 0 };
	atm.count = 3;
	atm.login = -1;

	atm.c[0].accs = 1111;	atm.c[0].moneys = 1000;
	atm.c[1].accs = 2222;	atm.c[1].moneys = 2000;
	atm.c[2].accs = 3333;	atm.c[2].moneys = 3000;

	while (1) {
		printf("1.�α���\n");
		printf("2.�α׾ƿ�\n");
		printf("3.��ü�ϱ�\n");
		printf("4.ȸ������\n");
		printf("5.Ż���ϱ�\n");
		printf("6.�����ϱ�\n");
	}
}
