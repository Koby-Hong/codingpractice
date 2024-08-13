#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("arr: %p\n, arr+1: %p\n", arr, arr+1);

    return 0;
}