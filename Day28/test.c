#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

add(int x, int y) {
	int result;
	result = x + y;
	return result;
}

int get_interger() {
	int value = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", value);
	return value;
}

int main(void) {
	int x, y;
	x = get_interger();
	y = get_interger();
	int result = x + y;

	printf("�� ���� �� : %d \n", result);
	return 0;
}