#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int money = 0; 
// ��������
// ���������� ���������� �̸��� ������ ���������� ���δ�

int plus(int plus_money) {
	printf("�Ա� �ݾ��� �Է��ϼ���\n");
	scanf("%d", &plus_money);
	int a = 0;
	a = money + a;
	return a;
}

int minus(int minus_money) {
	printf("��� �ݾ��� �Է��ϼ���\n");
	scanf("%d", &minus_money);
	int b = 0;
	b = money - b;
	if (b <= 0) {
		printf("�ܾ��� �ʹ� �����ϴ�");
	}
	return b;
}


int main() {
	char a = 0;
	int sel = 0;
	int start = 0;
	int plus_money, minus_money;
	
	while (1) {
		printf("==== �޴��� �����ϼ��� ====\n");
		printf("<1> �ܰ� Ȯ��\n<2> �Ա�\n<3> ���\n<4> ����\n");
		printf("===========================\n");
		scanf("%d", &sel); printf("\n");
		if (sel != 0) {
			start = 1;
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
				printf("�����Ͻðڽ��ϱ�? (y n) : ");
				scanf("%c", &a);
				if (a == 'y') {
					break;
				}
				else {
					continue;
				}
			}
		}
	}
}
