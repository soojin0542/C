#include <Windows.h>
#include <stdio.h>


int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	//문제 1) 전체 합 리턴
	//정답 1) 150
	int a = 0;

	for (int i = 0; i < 5; i++) {
		a = a + arr[i];
	}

	printf("총점 : %d", a); printf("\n\n");

	
	//문제 2) 4의 배수의 합 리턴
	//정답 2) 60
	a = 0;

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 4 == 0) {
			a = a + arr[i];
		}
	}

	printf("4의 배수의 합 : %d", a); printf("\n\n");


	//문제 3) (인덱스로)값 교체
	int idx1 = 0; int idx2 = 0;
	printf("(1) 0~4 이내의 값 입력 : ");
	scanf_s("%d", &idx1);
	printf("(2) 0~4 이내의 값 입력 : ");
	scanf_s("%d", &idx2);

	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;


	for (int i = 0; i < 1; i++){
		printf("%d ", arr[idx1]);
		printf("%d \n\n", arr[idx2]);
	}
	


	//문제 4) (값으로)값 교체
	idx1 = 0; idx2 = 0;
	int count = 0; int value1 = 0; int value2 = 0;

	for (int i = 0; i < count; i++) {
		if (arr[i] == value1) { idx1 = i; }
		if (arr[i] == value2) { idx2 = i; }
	}

	printf("(1) 0~4 이내의 값 입력 : ");
	scanf_s("%d", &idx1);
	printf("(2) 0~4 이내의 값 입력 : ");
	scanf_s("%d", &idx2);

	tmp = 0;
	tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;

	for (int i = 0; i < 1; i++) {
		printf("%d ", arr[idx1]);
		printf("%d \n\n", arr[idx2]);
	}
}

