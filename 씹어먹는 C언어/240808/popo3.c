#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int (*parr)[3] = &arr; // (*parr)[3]: 주소 array, &arr: 주소 array

    printf("arr: %p\n", arr);
    printf("parr: %p\n", parr);

    return 0;
}