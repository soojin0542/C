#include <Windows.h>
#include <stdio.h>


/*
# 배열(array)
[1] 선언
	1) int 변수명[개수];
	2) int arr[5];			변수 5개를 한꺼번에 할당받는다.
[2] 사용
	1) 배열은 0부터 방의 개수만큼 1씩 증가하면서 방이 생성된다.
	2) 이때 방번호(index)를 사용한다.
	   예) arr[0] = 10;		arr[1] = 20;
	3) 반복문을 사용해 효과적으로 이용할 수 있다.
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
	// 배열 축약형 : 처음 한번만 작성 가능
	int scores[5] = { 10, 20, 30, 40, 50 };
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
}