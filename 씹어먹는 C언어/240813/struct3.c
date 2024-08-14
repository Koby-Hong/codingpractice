#include <stdio.h>
struct Books{
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};

int main() {
    struct Books book_list[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("book %d: ", i+1);
        scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
    }

    for (i = 0; i < 3; i++) {
        printf("%dth book ---------\n", i+1);
        printf("name: %s\n", book_list[i].name);
        printf("author: %s\n", book_list[i].auth);
        printf("publisher: %s\n", book_list[i].publ);

        if (book_list[i].borrowed == 0) {
            printf("not borrowed\n");
        } else {
            printf("borrowed\n");
        }
    }

    return 0;

}