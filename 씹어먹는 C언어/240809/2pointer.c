#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("sizeof(arr): %lu\n", sizeof(arr));
    printf("column: %lu\n", sizeof(arr[0])/sizeof(arr[0][0]));
    printf("row: %lu\n", sizeof(arr)/sizeof(arr[0]));

    return 0;
}