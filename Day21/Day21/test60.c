#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {

/*
int count = 0;
//5로변경
int* p = &count;

p[0] = 5;
printf("%d", count); printf("\n");
*/


//구구단
//사용자가 3문제 틀릴시 반복 종료
//맞힌 개수 포인터 변수 이용해서 누적

/*
srand(time(NULL)); //seed값으로 현재시간 부여 
printf("난수 : %d\n", rand() % 10);
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
        printf("답을 입력하세요 : ");
        scanf_s("%d", &k);
            if (i * j == k) {
                printf("정답입니다!");
                a += 1;
            }
            else {
                printf("틀렸습니다.");
                b += 1;
            }
        printf("\n\n");
    }
    printf("맞힌 갯수 : %d", a);
}        

