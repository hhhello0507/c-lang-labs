#include <stdio.h>

int main(void) {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int *parr = &arr[0];

    for (int i = 0; i < 10; ++i) {
        printf("%d - %d - %d\n", parr + i, &arr[i], parr + i == &arr[i]);
    }

    return 0;
}
