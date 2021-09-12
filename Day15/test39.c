#include <Windows.h>
#include <stdio.h>

int main() {
	// # 배열 컨트롤러
	// 1. 추가 : 값을 입력받아 순서대로 추가하기
	// 2. 삭제 : 방번호(index)를 입력받아 값 삭제하기
	// 3. 삭제 : 값을 입력받아 값 삭제하기

	int score[5] = { 0 };
	int max = 5;
	int count = 0;

	int i = 0;
	while (i == 0) {
		printf("1.추가 2.삭제[번호] 3.삭제[값] 4.출력\n");

		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (count < max) {
				printf("추가할 값을 입력하세요."); printf("\n");
				int id = 0;
				scanf_s("%d", &id);

				score[count] = id;
				count = count + 1;
			}
			else {
				printf("더이상 추가할수 없습니다.\n");
			}
		}

		else if (sel == 2) {
			printf("[삭제]인덱스를 입력하세요 : ");
			int del_idx = 0;
			scanf_s("%d", &del_idx);

			if (0 <= del_idx && del_idx < count) {
				for (int i = del_idx; i < count - 1; i++) {
					score[i] = score[i + 1];
				}
				count = count - 1;
			}
			else {
				printf("[메세지]해당 위치는 삭제할 수 없습니다.\n");
			}
		}

		else if (sel == 3) {
			printf("삭제값을 입력하세요 :");
			int del_value = 0;
			scanf_s("%d", &del_value);

			int check = -1;
			for (int i = 0; i < count; i++) {
				if (score[i] == del_value) {
					check = i;
				}
			}

			if (check == -1) {
				printf("[메세지]해당 값은 존재하지 않습니다.\n");
			}
			else {
				for (int i = check; i < count - 1; i++) {
					score[i] = score[i + 1];
				}
				count = count - 1;
			}
		}

		else if (sel == 4) {
			for (int i = 0; i < count - 1; i++) {
				printf("%d ", score[i]);
			}
			printf("\n");
		}
	}
}