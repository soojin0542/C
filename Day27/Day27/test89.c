#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
struct Question {
	char question[100];
	char item1[100];
	char item2[100];
	char item3[100];
	char item4[100];
	int solution;
};
struct Question bank[100] = {
	{"���� �ٸ� �ڷ����� ������ �ִ� ������?",
	 "1.�迭", "2.����", "3.����ü", "4.������"}
};

int main() {
	int i = 0;
	for (i = 0; i < 2; i++) {
		int select = 0;
		printf("%s  ", bank[i].question);
		printf("%s  ", bank[i].item1);
		printf("%s  ", bank[i].item2);
		printf("%s  ", bank[i].item3);
		printf("%s   : ", bank[i].item4);
		scanf("%d", &select);
		if (select == 3) {
			printf("�¾ҽ��ϴ�");
			break;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�");
		}
	}
}
*/
/*
int main() { 
	//�ؽ�Ʈ�� �Է¹޾� �ҹ��ڸ� ��� �빮�ڷ� �ٲ� ���
	char alphabet[100]; int i;
	printf("�빮�� ��ȯ��\n");
	printf("�ҹ��ڸ� �Է��ϼ��� : ");
	scanf("%s", &alphabet);
	for (i = 0; i < strlen(alphabet); i++) {
		alphabet[i] = toupper(alphabet[i]);
	}
	printf("��� : %s", alphabet);
}
*/
/*
void main() {
	//�迭�� �Էµ� ���� ���� ����
	char gather[100];
	int i, j;
	printf("�ؽ�Ʈ �Է� : ");
	scanf("%s", gather);

	for (i = 0; gather[i]; i++) {
		if (gather[i] == 'a' ||
			gather[i] == 'e' ||
			gather[i] == 'i' ||
			gather[i] == 'o' ||
			gather[i] == 'u') {
			for (j = i; gather[j]; j++) {
				gather[j] = gather[j + 1];
			}
		}
		else if (
			gather[i] == 'A' ||
			gather[i] == 'E' ||
			gather[i] == 'I' ||
			gather[i] == 'O' ||
			gather[i] == 'U') {
			for (j = i; gather[j]; j++) {
				gather[j] = gather[j + 1];
			}
		}
		printf("���� �ؽ�Ʈ : %s\n", gather);
		return 0;
	}
}
*/
/*
void main() {
	//ö�ڱ��� ���α׷�
	//1.������ ���� ��ħǥ ���� Ȯ��
	//������ �־��ش�

	//2.���ڿ��� ù��°�� �빮������ �˻�
	//�ƴ϶�� �빮�ڷ� ��ȯ

	//��) hello -> Hello.
	char a[100] = 

	printf("�ؽ�Ʈ�� �Է��ϼ��� : ");
	scanf("")
}
*/