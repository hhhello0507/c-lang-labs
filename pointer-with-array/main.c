#include <stdio.h>

int main(void) {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int *parr = &arr[0];

    // 1
    for (int i = 0; i < 10; ++i) {
        printf("%d - %d - %d\n", parr + i, &arr[i], parr + i == &arr[i]);
    }

    // 2
    for (int i = 0; i < 10; ++i) {
        printf("%d - %d - %d\n", parr + i, &i[arr], parr + i == &arr[i]);
    }

    int arr1[3] = {1, 2, 3};
    printf("%d\n", 2[arr1]);

    int arr2[3][3] = {
        {
            1, 2, 3
        },
        {
            4, 5, 6
        },
        {
            7, 8, 9
        }
    };

    printf("%d", 2[1[arr2]]);

    return 0;

}
