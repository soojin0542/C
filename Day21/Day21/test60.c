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
int a = 1; int b = 3; int c = 0;
/*
srand(time(NULL)); //seed값으로 현재시간 부여 
printf("난수 : %d\n", rand() % 10);
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