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

    printf("�ֹε�Ϲ�ȣ %c", y.num1[10]);
    printf("�̸� %s", x.name);
    printf("��ȭ��ȣ %s", x.num2);
}