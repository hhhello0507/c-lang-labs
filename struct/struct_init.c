#include <stdio.h>

struct Obj {
    int a, b;
} obj1 = {1, 2}, obj2 = {3, 4};

int main() {
    printf("%d, %d\n", obj1.a, obj1.b);
    printf("%d, %d\n", obj2.a, obj2.b);

    return 1;
}
