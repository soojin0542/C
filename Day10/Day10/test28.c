#include <Windows.h>
#include <stdio.h>

int main() {
	int db_id1 = 1111; int db_id2 = 2222;
	int db_m1 = 1000; int db_m2 = 2000;
	int log = -1; //�α׾ƿ��� -1 // �α����� �ش� ���̵� //
	int run = 1;
	int n;

	while (run == 1) {
		if (log == -1) {
			printf("�α����ϼ���");
		}
		else {
			printf("[%d] �α�����...", log); printf("\n");
		}

		printf("====== mega atm ======= \n");
		printf("1.�α��� 2.���� \n");
		int sel; scanf_s("%d", &sel);

		if (sel == 1) {
			printf("���̵� �Է��ϼ��� \n");
			int id; scanf_s("%d", &id);
			if (id == db_id1) {
				log = id;
			}
			if (id == db_id2) {
				log = id;
			}



			while (log != -1) {
				printf("====== %d =======", log); printf("\n");
				printf("3.�ܾ���ȸ 4.��� 5.�Ա� 0.�α׾ƿ� \n");
				int sell; scanf_s("%d", &sell);

				if (sell == 0) {
					log = -1;
				}

				if (sell == 3) {
					if (log == db_id1) {
						printf("%d�� ���ҽ��ϴ�.", db_m1); printf("\n");
					}
					else if (log == db_id2) {
						printf("%d�� ���ҽ��ϴ�.", db_m2); printf("\n");
					}
				}

				if (sell == 4) {
					if (log == db_id1) {
						printf("�ܾ�:%d", db_m1); printf("\n");
						printf("����� �ݾ��� �Է��ϼ���. \n");
						scanf_s("%d", &n);

						if (db_m1 <= n) {
							printf("�ܾ��� �����մϴ� \n");

						}
						else {
							printf("�ܾ�:%d \n", db_m1 - n);
							db_m1 = db_m1 - n;
						}
					}

					else if (log == db_id2) {
						printf("�ܾ�:%d", db_m2); printf("\n");
						printf("����� �ݾ��� �Է��ϼ���. \n");
						scanf_s("%d", &n);

						if (db_m2 <= n) {
							printf("�ܾ��� �����մϴ� \n");

						}
						else {
							printf("�ܾ�:%d \n", db_m2 - n);
							db_m2 = db_m2 - n;
						}
					}
				}
			}
		}
		if (sel == 2) {
			run = 0;
		}
	}
}