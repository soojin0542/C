#include <Windows.h>
#include <stdio.h>

int main() {

	// ȸ������ // ���� 2�� ������ (5��ۿ� ���ԺҰ�)
	int id[] = { 7777, 4545 , 0 , 0, 0 };
	int pw[] = { 111, 222, 0, 0, 0 };
	int member = 2;
	
	// 1.ȸ������ 2.��ü��� (���� ���Ե��ο����� ���)
	//����1) 5���̻��ϰ�� ���ԺҰ� ó�� 
	//����2) �̹̰��Ե� ���̵�� ���ԺҰ� 7777(x) , 4545(x)



	int run = 1;

	while (run == 1) {
		printf("1.ȸ������ 2.��ü��� 0.����"); printf("\n");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 0) {
			run = 0;
		}
		else if (sel == 1) {
			if (member < 5) {
				printf("id�� pw�� �Է��ϼ��� "); printf("\n");

				int id1 = 0;
				int pw1 = 0;
				scanf_s("%d", &id1);
				scanf_s("%d", &pw1);

				int check = 0;
				for (int i = 0; i < member; i++) {
					if (id[i] == id1) {
						member = 1;
						printf("�ߺ��� ���̵��Դϴ�.\n");
					}
				}
				if (check == 0) {
					id[member] = id1;
					pw[member] = pw1;
					member = member + 1;
				}
			}
		}
		else if (sel == 2) {
			for (int i = 0; i < member; i++) {
				printf("[%d��] [%d] [%d]\n", i + 1, id[i], pw[i]);
			}
		}
	}


}