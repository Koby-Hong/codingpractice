#include <stdio.h>
int compare(char *str1, char *str2);
int main() {
    char str1[20] = "hello everyone";
    char str2[20] = "hello there";
    char str3[20] = "hello everyone";

    if (compare(str1, str2)) {
        printf("str1 = str2\n");
    }

    if (compare(str1, str3)) {
        printf("str1 = str3\n");
    }

    return 0;

}

int compare(char *str1, char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    if (*str2) {
        return 0;
    }
    return 1;
}