#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    printf("%p\n", ptr);

    bool *flag = malloc(sizeof(bool));

    memset(ptr, 1, 2);

    printf("%d\n", *ptr);

    char arr[10];

    memset(arr, 65, sizeof(arr));

    for (int i = 0; i < 10; ++i) {
        printf("%c\n", arr[i]);
    }

    free(ptr);
    free(flag);

    return 0;
}
