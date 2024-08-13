#include <stdio.h>
int main() {
    int i;
    printf("입력하고 싶은 숫자: ");
    scanf("%d", &i);

    if (i==7) {
        printf("lucky!");
    }
    return 0;
}