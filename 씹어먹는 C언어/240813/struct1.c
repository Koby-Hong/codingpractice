#include <stdio.h>
struct Human {
    int age;
    int height;
    int weight;
};

int main() {
    struct Human hki;
    hki.age = 23;
    hki.height = 172;
    hki.weight = 67;

    printf("who is hki?\n");
    printf("age: %d\n", hki.age);
    printf("height: %d\n", hki.height);
    printf("weight: %d\n", hki.weight);

    return 0;
}