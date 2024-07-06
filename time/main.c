#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/errno.h>

int main(void) {
    struct timespec ts;

    abort();


    int result = clock_gettime(CLOCK_REALTIME, &ts);
    if (result == -1) {
        perror("clock_gettime");
        exit(EXIT_FAILURE);
    }
    printf("%d\n", ts.tv_sec);
    printf("%d\n", ts.tv_nsec);

    return 0;
}
