#include <Windows.h>
#include <stdio.h>

int main() {

	// ���� �߱� ����
	// 0~9������ ���� 3���� me �� �Է¹޴´�.(�ߺ�����)
	// com �� me �� ���ؼ� com�� ���ڸ� ���⶧�����ݺ�
	// com �� �񱳰���� ��Ʈ�� �ش�.
	// ���ڿ� �ڸ��������� strike += 1;
	// �������߿��� ���ڸ� ���� �ڸ��� Ʋ���� ball += 1;
	// ��) 1 , 3, 7 ==> 1s, 1b
	// ��) 3, 2, 4  ==> 1s 
	int com[3] = { 3, 0, 7 };
	int me[3] = { 0, 0, 0 };
	int ball = 0;
	int strike = 0;

	int a = 0;
	while (a < 3) {
		printf("0~9������ ���ڸ� ��ġġ �ʰ� �Է��ϼ���.\n");
		scanf_s("%d", &me[a]); printf("\n");
		a += 1;
	}


	int b = 0;
	while (b < 3) {
		int c = 0;
		while (c < 3) {
			if (com[b] == me[c]) {
				if (b == c) {
					strike += 1;
				}
				else {
					ball += 1;
				}
			}
			c += 1;
		}
		b += 1;
	}
	
	printf("���\n");
	printf("��Ʈ����ũ : %d��", strike); printf("\n");
	printf("�� : %d��", ball); printf("\n");

}