#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool flag = false;
    printf("%d\n", flag);

    flag = !flag;

    printf("%d\n", flag);

    printf("%d\n", sizeof(bool));
    printf("%d\n", sizeof(int));

    return 0;
}
