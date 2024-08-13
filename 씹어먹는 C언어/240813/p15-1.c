#include <stdio.h>
int reverse_string(char *str);
int string_length(char *str);
int main() {
    char str[101];

    printf("input str: ");
    scanf("%s", str);

    reverse_string(str);

    printf("output str: %s\n", str);

    return 0;

}

int reverse_string(char *str) {
    int len = string_length(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return 1;

}

int string_length(char *str) {
    int len = 0;
    while (*str) {
        len++;
        str++;
    }

    return len;
}