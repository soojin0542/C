#include <Windows.h>
#include <stdio.h>

int main() {

	int score[5] = { 10 ,   20,   60 ,  40,   3 };
	int num[5] = { 1001, 1002, 1003, 1004, 1005 };

	//����1) ������ 60�� �̻��̸� �հ�. �հݻ� �� ���
/*
	//����1) 1��
	int i;
	int count = 0;
	for (i = 0; i < 6; i++) {
		if (score[i] >= 60) {
			count += 1;
			printf("�հݻ�:%d��\n\n", count);
		}
	}

	//����2) �й��� �Է��ϸ� ���� ��� 
	//����2) 1001 ==> 10
	
	printf("�й��� �Է��ϼ��� : ");
	int number = 0;
	scanf_s("%d", &number);
	
	
	for (i = 0; i < 5; i++) {
		if (number == num[i]) {
			printf("���� = %d\n", score[i]);
		}
	}



	//����3) ������ �Է¹޾� ���ȣ(index) ���
	//����3) 60 ==> 1003
	printf("������ �Է��ϼ��� : ");
	int a = 0;
	int i = 0;
	scanf_s("%d", &a);

	for (i = 0; i < 5; i++) {
		if (a == score[i]) {
			printf("�й� = %d\n", num[i]);
		}
	}



	//����4) ���� �й��� �Է��ϸ� "����"��� ���
	//����4) 1006 ==> "����"
	printf("�й��� �Է��ϼ��� : ");
	int b = 0;
	int i = 0;
	scanf_s("%d", &b);

	int check = -1;
	for (i = 0; i < 5; i++) {
		if (b == num[i]) {
			check = i;
		}
	}
	if (check == -1) {
		printf("����");
	}
*/


	//����5) 1���л��� �й��� ���� ���
	//����5) 1003�й�(60��)
	int max_score = 0;
	int max_idx = 0;
	int i = 0;

	for (i = 0; i < 5; i++) {
		if (max_score < score[i]) {
			max_score = score[i];
			max_idx = i;
		}
	}
	printf("%d�й�(%d��)\n", num[max_idx], max_score);

}