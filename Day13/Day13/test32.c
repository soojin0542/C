#include <Windows.h>
#include <stdio.h>


/*
# �迭(array)
[1] ����
	1) int ������[����];
	2) int arr[5];			���� 5���� �Ѳ����� �Ҵ�޴´�.
[2] ���
	1) �迭�� 0���� ���� ������ŭ 1�� �����ϸ鼭 ���� �����ȴ�.
	2) �̶� ���ȣ(index)�� ����Ѵ�.
	   ��) arr[0] = 10;		arr[1] = 20;
	3) �ݺ����� ����� ȿ�������� �̿��� �� �ִ�.
*/

void main() {

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[2]);
	}
	printf("\n");

//--------------------
	// �迭 ����� : ó�� �ѹ��� �ۼ� ����
	int scores[5] = { 10, 20, 30, 40, 50 };
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
}