#include <Windows.h>
#include <stdio.h>

// �ݺ��� ���� 2���� // 1)�ʱ�� 2)���ǽ� 3)������ 
// 1) while
// 2) for   // ��������;(�����ݷ�)�� ����.

int main() {
	//������ ��� 4���� 
	// a = a + 1;
	// a += 1;
	// a++;
	// ++a;

	int n = 0;    // �ʱ�� 
	while (n < 4) {  // ���ǽ�
		printf("%d", n);
		n = n + 1;  // ������ 
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 4; i = i + 1) {
		printf("%d", i);
		printf("\n");
	}
	printf("\n");
}