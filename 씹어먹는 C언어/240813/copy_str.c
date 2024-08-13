#include <stdio.h>
int stradd(char *dest, char *src);
int main() {
    char str1[100] = "hello my name is ";
    char str2[] = "hki";

    printf("before add: %s\n", str1);

    stradd(str1, str2);

    printf("after add: %s\n", str1);
}

int stradd(char *dest, char *src) {
    while (*dest) dest++;

    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return 1;
}