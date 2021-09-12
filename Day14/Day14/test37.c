#include <Windows.h>
#include <stdio.h>

int main() {

	// 회원가입 // 현재 2명 가입중 (5명밖에 가입불가)
	int id[] = { 7777, 4545 , 0 , 0, 0 };
	int pw[] = { 111, 222, 0, 0, 0 };
	int member = 2;
	
	// 1.회원가입 2.전체출력 (현재 가입된인원수만 출력)
	//조건1) 5명이상일경우 가입불가 처리 
	//조건2) 이미가입된 아이디로 가입불가 7777(x) , 4545(x)



	int run = 1;

	while (run == 1) {
		printf("1.회원가입 2.전체출력 0.종료"); printf("\n");
		int sel = 0;
		scanf_s("%d", &sel);

		if (sel == 0) {
			run = 0;
		}
		else if (sel == 1) {
			if (member < 5) {
				printf("id와 pw를 입력하세요 "); printf("\n");

				int id1 = 0;
				int pw1 = 0;
				scanf_s("%d", &id1);
				scanf_s("%d", &pw1);

				int check = 0;
				for (int i = 0; i < member; i++) {
					if (id[i] == id1) {
						member = 1;
						printf("중복된 아이디입니다.\n");
					}
				}
				if (check == 0) {
					id[member] = id1;
					pw[member] = pw1;
					member = member + 1;
				}
			}
		}
		else if (sel == 2) {
			for (int i = 0; i < member; i++) {
				printf("[%d번] [%d] [%d]\n", i + 1, id[i], pw[i]);
			}
		}
	}


}