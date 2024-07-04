#include "stdio.h"

struct Test {
    int a, b;
    int *ptr;
};

int main() {
    struct Test st;
    struct Test *ptr = &st;

    ptr->a = 1;
    ptr->b = 2;
    ptr->ptr = &ptr->a;
    *ptr->ptr = 10;

    printf("%d\n", *ptr->ptr);

    printf("st 의 a 멤버 : %d \n", st.a);
    printf("st 의 b 멤버 : %d \n", st.b);

    return 0;
}
