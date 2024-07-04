#include <stdio.h>

int main(void) {
    int n1 = (int) NULL;
    int n2 = 0;
    int n3 = '\0';
    printf("%d %d %d\n", n1, n2, n3);

    printf("%d", n1 == n2 && n2 == n3);

    return 0;
}
