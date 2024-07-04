#include <stdio.h>

int add(int a, int b);

void on_click(int view) {
    printf("clicked - %d\n", view);
}

void set_on_click(void (*on_click_listener)(int)) {
    int temp_view = 1;
    on_click_listener(temp_view);
}

int main(void) {
    int a = 1;
    int b = 4;
    printf("%d\n", add(a, b));

    int (*func)(int, int) = add;

    printf("%d\n", func(a, b));

    set_on_click(on_click);

    return 0;
}

int add(int a, int b) {
    return a + b;
}
