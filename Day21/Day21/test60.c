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
int a = 1; int b = 3; int c = 0;
/*
srand(time(NULL)); //seed������ ����ð� �ο� 
printf("���� : %d\n", rand() % 10);
*/

while (a == 1) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", rand() % 10,
            rand() % 10, (rand() % 10 * rand() % 10));
        }
        printf("\n");
    }
    a = 0;
}


}                                                                                                   