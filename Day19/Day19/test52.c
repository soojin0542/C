#include <stdio.h>

int main() {
//����1)
	int c = 0; //�ݺ�

/*
	int arr[5] = { 10,20,30,40,50 };
	int a[5] = { 0,0,0,0,0 };
	int b[5] = { 0,0,0,0,0 };
	//����1) arr�� ���߿��� 4�� ����� a�� �Ųٷ�����
	// ��) a ={0,0,0,40,20}
	int d = 0; int i = 0;


	int k = 4;
	for (i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			a[k] = arr[i];
			k -= 1;
		}

	}

	for (c = 0; c < 5 ; c += 1) {
		printf("[%d] ", a[c]);
	}


	//����2)
	int game[8] = { 0,2,2,0,0,8,0,4 };
	// 1)left 2)right 
	// 1���̳� 2���� �����ϸ� ���������� 0 �̾ƴѼ��ڵ��� ���ʴ�� ������.
	//��) left ==> {2,2,8,4,0,0,0,0};
	//��) right ==> {0,0,0,0,2,2,8,4};
	int j = 0; int k = 0; int l = 0;

	printf("1) left\n2) right \n");
	printf("��ȣ�� �����ϼ���: ");
	scanf_s("%d", &j);
	
	if (j == 1) {
		for (k = 0; k < 8; k++) {
			if (game[k] == 0) {
				l ++ ;
			}
			else {
				printf("[%d] ", game[k]);
			}
		}
		for (int m = 8 - l; m < 8; m++) {
			printf("[%d] ", 0);
		}
	}

	else if (j == 2) {
		for (int k = 0; k < 8; k++) {
			if (game[k] == 0) {
				printf("[%d] ", 0);
			}
		}
		for (int m = 0; m < 8; m++) {
			if (game[m] != 0) {
				printf("[%d] ", game[m]);
			}
		}
	}
*/

	int arr[5] = { 10, 43, 62, 16, 56 };
	//�� �迭�� �л� 5���� �����̴�.
	//������ �Է¹ް� ������
	//��) 62 ==> 1��
	//16 ==> 4��
	//54 ==> ����
	int n = 0;  
	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &n);

	int o = 0; int p = 0;
	for (o = 0; o < 5; o++) {
		if (arr[o] == n) {
			p += 1;
		}
	}

	int q = 0; int r = 1;
	if (p == 1) {
		for (int q = 0; q < 5; q++) {
			if (arr[q] > n) {
				r += 1;
			}
		}
		printf("%d��", r); printf("\n");
	}

	else if (p == 0) {
		printf("���� �����Դϴ� \n");
	}
}