#include <Windows.h>
#include <stdio.h>

struct Student {
	int hakbun[5];
	int score[5];
};


void main() {
	// ���� 1) 1~100 ������ ���� ���� 5�� ����
	// ���� 1)[60, 100, 73, 3, 81]
	printf("���� 1) 1~100 ������ ���� ���� 5�� ����\n");
	struct Student s;
	s.hakbun[0] = 1; s.hakbun[1] = 2; s.hakbun[2] = 3; 
	s.hakbun[3] = 4; s.hakbun[4] = 5;

	s.score[0] = 60; s.score[1] = 100; s.score[2] = 73;
	s.score[3] = 3; s.score[4] = 81;

	printf("\n\n");


	//���� 2) �������� ���� ���
	printf("���� 2) �������� ���� ���\n");
	for (int i = 0; i < 5; i++) {
		printf("�й� : %d ���� : %d", s.hakbun[i], s.score[i]);
		printf("\n");
	}
	printf("\n\n");

	//���� 3) �������� ���� ���
	//���� 3) ����(317��)
	printf("���� 3) �������� ���� ���\n");
	int a = 0;
	for (int i = 0; i < 5; i++) {
		a = a + s.score[i];
	}
	printf("���� : %d", a);
	printf("\n\n\n");


	//���� 4) �������� ��� ���
	//���� 4) ���(63.4��)
	printf("���� 4) �������� ��� ���\n");
	a = 0; float b = 0.f;
	for (int i = 0; i < 5; i++) {
		a = a + s.score[i];
	}
	 b = a / 5.f;

	printf("%.1f", b);
	printf("\n\n\n");


	//���� 5) �հݻ�(���� 75���̻�)�� �й��� ���� ���
	//���� 5) 1002�й�(100��), 1005�й�(81��)
	printf("���� 5) �հݻ�(���� 75���̻�)�� �й��� ���� ���\n");
	a = 0;
	while (a < 5) {
		if (s.score[a] >= 75) {
			printf("%d�й� (%d��)", s.hakbun[a], s.score[a]);
			printf("\n");
		}
		a += 1;
	}
	printf("\n\n");


	//���� 6) 1�� �л��� �й��� ���� ���
	//���� 6) 1002�й�(100��)
	printf("���� 6) 1�� �л��� �й��� ���� ���\n");
	a = 0; int c = 0; int d = 0;
	while (a < 5) {
		if (s.score[a] >= c) {
			c = s.score[a];
			d = s.hakbun[a];
		}
		a += 1;
	}
	printf("�й� : %d (%d��)", d, c);
	printf("\n\n\n");


	//���� 7) �й��� �Է¹޾� ���� ���
	printf("���� 7) �й��� �Է¹޾� ���� ���\n");

	int e = 0;
	printf("�й��� �Է��ϼ���.(���� ���) ");
	scanf_s("%d", &e);
	printf("%d", s.score[e - 1]);
	printf("\n\n");
	
	
	//���� 8) ������ �Է¹޾� �й� ���
	printf("���� 8) ������ �Է¹޾� �й� ���\n");

	e = 0; int f = 0;
	printf("������ �Է��ϼ���.(�й� ���) ");
	scanf_s("%d", &e);
	for (int i = 0; i < 5; i++) {
		if (e == s.hakbun[i]) {

		}
	}

	printf("%d", );
	printf("\n\n");


	//���� 9) �й��� �Է¹޾� �л�����(�й��� ����) ����
	//���� 9) ���� �й� �Է� ��, ����ó��
	printf("���� 9) �й��� �Է¹޾� �л����� ����\n");
	printf("\n\n");


	//���� 10) ���������� �������� ����
	printf("���� 10) ���������� �������� ����\n");
	printf("\n\n");

}



