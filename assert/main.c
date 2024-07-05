#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *ptr = malloc(sizeof(int));

    assert(ptr != NULL);

    free(ptr);

    return 0;
}