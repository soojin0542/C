#include <Windows.h>
#include <stdio.h>
#include "test14.h"

// if �� �ɼ� 2���� (�ܵ����Ұ���)
// 1) else  ==> if �� ���� ���� ���δ� 
/* 
void main() {
	//����

	int score;
	scanf_s("%d", &score);

	if (60 <= score && score <= 100) {
		printf("�հ�");
	}
	else {
		printf("���հ�");
	}
	printf("\n");
	printf("\n");
*/
	
// if �� �ɼ� 2����
// 1) else
// 2) elseif ==> if �� ������ ������ �ʿ��Ҷ� ��� 
//				 ���������� ���������� ������ �˻��ؼ� ���̳����� �������� ����
//				����� ������ 1���� ���´�.


// if �� �ɼ� 2����
// 1) else
// 2) elseif ==> if �� ������ ������ �ʿ��Ҷ� ��� 
//				 ���������� ���������� ������ �˻��ؼ� ���̳����� �������� ����
//				����� ������ 1���� ���´�.
void main() {
	printf("====== atm ======="); printf("\n");
	printf("1. �Ա� 2. ��� 3.����"); printf("\n");

	int select;
	int wallet

	scanf_s("%d", &select);
	scanf_s("%d", &wallet);

	if (select == 1) {
		printf("�Ա�");
	}

	printf("�Ա��� �ݾ��� �Է��ϼ���.");

	else if (select == 2) {
		printf("���");
	}

	else if (select == 3) {
		printf("����");
	}

	else {
		printf("����");
	}

}