#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {

/*
int count = 0;
//5�κ���
int* p = &count;

p[0] = 5;
printf("%d", count); printf("\n");
*/


//������
//����ڰ� 3���� Ʋ���� �ݺ� ����
//���� ���� ������ ���� �̿��ؼ� ����

/*
srand(time(NULL)); //seed������ ����ð� �ο� 
printf("���� : %d\n", rand() % 10);
(rand() % 9 + 2);
*/

srand(time(NULL));
int a = 0;
int b = 0;
int k = 0;


    while (b != 3) {
        int i = (rand() % 9 + 2);
        int j = (rand() % 9 + 2);

        printf("%d x %d = ? ", i, j);
        printf("\n");
        printf("���� �Է��ϼ��� : ");
        scanf_s("%d", &k);
            if (i * j == k) {
                printf("�����Դϴ�!");
                a += 1;
            }
            else {
                printf("Ʋ�Ƚ��ϴ�.");
                b += 1;
            }
        printf("\n\n");
    }
    printf("���� ���� : %d", a);
}        

