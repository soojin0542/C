#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� �Լ�

int money = 0; 
// ��������
// ���������� ���������� �̸��� ������ ���������� ���δ�

int plus(int plus_money) {
	printf("�Ա� �ݾ��� �Է��ϼ���\n");
	scanf("%d", &plus_money); printf("\n");
	money = money + plus_money;
	return plus_money;
}

int minus(int minus_money) {
	printf("��� �ݾ��� �Է��ϼ���\n");
	scanf("%d", &minus_money); printf("\n");
	if (money <= minus_money) {
		printf("�ܾ��� �ʹ� �����ϴ�\n"); printf("\n");
		minus_money = 0;
	}
	money = money - minus_money;
	return minus_money;
}


int main() {
	char a = 0;
	int sel = 0;
	int start = 0;
	int plus_money, minus_money, program;
	
	while (1) {
		printf("==== �޴��� �����ϼ��� ====\n");
		printf("<1> �ܰ� Ȯ��\n<2> �Ա�\n<3> ���\n<4> ����\n");
		printf("===========================\n");
		scanf("%d", &sel);

		
		if (sel == 1) {
			printf("�ܾ��� %d �� ���ҽ��ϴ�.\n\n", money);
		}
		else if (sel == 2) {
			plus_money = plus(0);
		}
		else if (sel == 3) {
			minus_money = minus(0);
		}
		else if (sel == 4) {
			//program = exit(0);
			printf("�����Ͻðڽ��ϱ�? (y n) : ");
			scanf(" %c", &a); printf("\n");
			if (a == 'y') {
				break;
			}
			else {
				continue;
			}
			return a;
		}
		else {
			printf("���� �޴��Դϴ�");
			break;
		}
	}
}