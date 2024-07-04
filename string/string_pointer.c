#include <stdio.h>

void copy_str(const char *origin, char *copy) {
    while (*origin) {
        *copy = *origin;
        copy++;
        origin++;
    }
    *copy = '\0';
}

void add_str(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }

    while (*str2) {
        *str1 = *str2;
        str2++;
        str1++;
    }

    *str1 = '\0';
}

int compare(const char *str1, const char *str2) {
    while (*str1) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }

    if (*str2 != '\0') return 0;

    return 1;
}

int main(void) {
    char str[] = "hello";
    const char *pstr = "goodbye";

    str[1] = 'a';
    // pstr[1] = 'a'; Error

    printf("%s\n", str);
    printf("%s\n", pstr);

    const char str1[] = {"Hello"};
    char str2[100];
    copy_str(str1, str2);
    printf("%s\n", str2);

    int is_same = compare(str1, str2);
    printf("%d\n", is_same);

    add_str(str1, str2);
    printf("%s\n", str1);

}
