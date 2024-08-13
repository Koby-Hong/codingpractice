// 배열의 원소를 가리키는 포인터

#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;
    int i;
    parr = &arr[0];

    for (i = 0; i < 10; i++) {

        if (&arr[i] == (parr + i)) printf("equal at index %d\n", i+1);

    }

}