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
		printf("%s\n", bank[i].question);
		printf("%s	", bank[i].item1);
		printf("%s	", bank[i].item2);
		printf("%s  ", bank[i].item3);
		printf("%s : ", bank[i].item4);
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
int main() { //�̿�
	char alphabet[100];
	printf("�빮�� ��ȯ��\n");
	printf("�ҹ��ڸ� �Է��ϼ��� : ");
	scanf("%s", &alphabet);
	for (int i = 0; i < 100; i++) {
		toupper(alphabet[i]);
		printf("%c",alphabet[i]);
	}
}
*/

void main() {
	//�迭�� �Էµ� ������ ���� ����
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

/*
int main() {
	char str[100];
	int i, j;
	printf("�ؽ�Ʈ�� �Է��Ѵ� : ");
	scanf("%s", str);

	for (i = 0; str[i]; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			for (j = i; str[j]; j++) {
				str[j] = str[j + 1];
			}
		}
		else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			for (j = i; str[j]; j++) {
				str[j] = str[j + 1];
			}
		}
	}
	printf("���� �ؽ�Ʈ : %s\n", str);
	return 0;
}
*/