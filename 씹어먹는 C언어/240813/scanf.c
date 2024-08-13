#include <stdio.h>
int main() {
    int num;
    char str[30];

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    printf("문자를 입력하세요: ");
    scanf("%s", str);

    printf("str: %s\n", str);


    return 0;
}