#include <Windows.h>
#include <stdio.h>

void main() {

	int arr[5] = { 0 };	
	// 5���� ���� ��� 0���� �ʱ�ȭ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;


	//����1) �迭�� ��ü ����� 
	/*
	//����1) 150
	int a = 0;
	a = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	printf("%d", a);
	*/


	//����2) 4�� ����� ���
	/*
	//����2) 20 40
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	*/


	//����3) 4�� ����� �� ���
	/*
	//����3) 60
	int b = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			b = b + arr[i];
		}
	}
	printf("%d",b);
	*/


	//����4) 4�� ����� ���� ���
	/*
	//����4) 2
	int c = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			c = c + 1;
		}
	}
	printf("%d\n", c);
	*/


	//����5) ¦���� ���� ���
	//����5) 5
	int d = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			d = d + 1;
		}
	}
	printf("%d\n", d);
}