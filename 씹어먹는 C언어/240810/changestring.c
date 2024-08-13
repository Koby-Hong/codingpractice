#include <stdio.h>

int str_length(char *str);
int main() {
    char str[] = {"What is your name?"};

    printf("length: %d\n", str_length(str));

    return 0;
}

int str_length(char *str) {
    int i = 0;

    while (str[i]) i++;

    return i;
}