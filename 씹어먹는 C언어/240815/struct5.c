// 특정 변수의 값을 다른 함수를 통해 바꾸려면 변수의 주소값을 전달해야 한다!

#include <stdio.h>
struct TEST {
    int age;
    int gender;
};
int set_human(struct TEST *a, int age, int gender);

int main() {
    struct TEST human;
    set_human(&human, 10, 1);
    printf("age: %d\n", human.age);
    printf("gender: %d\n", human.gender);
    return 0;
}

int set_human(struct TEST *a, int age, int gender) {
    a->age = age;
    a->gender = gender;
    return 0;
}