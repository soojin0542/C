#include <Windows.h>
#include <stdio.h>

int main() {
	// ATM ��� �����

	// 1. �α��� ==> �α��ν� log �� �ش� ���̵� ���� 
	// 2. �α׾ƿ� ==> log = -1;
	// 3. �ܾ���ȸ ==> �α����ѻ���� ��ȸ����

	int db_id1 = 1111; int db_id2 = 2222;
	int db_m1 = 1000; int db_m2 = 2000;
	int log = -1;
	int run = 1;

	while (run == 1) {
		if (log == -1) {
			printf("�α����ϼ���. \n");
		}
		else {
			printf("[%d] �α�����...", log); printf("\n");
		}

		printf("====== mega atm ======= \n");
		printf("1.�α��� 2.�α׾ƿ� 3.�ܾ���ȸ \n");
		printf("\n");

		int sel; scanf_s("%d", &sel);
		if (sel == 1) {
			printf("���̵� �Է��ϼ���.");

			int id; scanf_s("%d", &id);
			if (id == db_id1) {
				log = db_id1;
			}
			else if (id == db_id2) {
				log = db_id2;
			}
			else {
				log = -1;
			}

		}
		else if (sel == 2) {
			log = -1;
		}
		else if (sel == 3) {

		}
	}
}