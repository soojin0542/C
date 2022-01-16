#include <Windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union unistudent {
   char num1[10];
};
struct strstudent {
    char name[25];
    char num2[25];
};

int main() {
    struct strstudent x;
    union unistudent y;

    y.num1[10] = "080101";
    strcpy(x.name, "soojin");
    strcpy(x.num2, "01012345678");

    printf("주민등록번호 %c", y.num1[10]);
    printf("이름 %s", x.name);
    printf("전화번호 %s", x.num2);
}