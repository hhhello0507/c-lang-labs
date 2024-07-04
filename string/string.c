// #include <stdio.h>
//
// struct Response {
//     char json[100];
// };
//
// int length(char *arr);
//
// int main(void) {
//     char sentence_1[4] = {'P', 's', 'i', '\0'};
//     char sentence_2[4] = {'P', 's', 'i', 0};
//     char sentence_3[4] = {'P', 's', 'i', (char) NULL};
//     char sentence_4[4] = {"Psi"};
//
//     printf("sentence_1 : %s \n", sentence_1); // %s 를 통해서 문자열을 출력한다.
//     printf("sentence_2 : %s \n", sentence_2);
//     printf("sentence_3 : %s \n", sentence_3);
//     printf("sentence_4 : %s \n", sentence_4);
//
//     struct Response r1 = {"{\"data\":\"Hello World\"}"};
//     printf("%s\n", r1.json);
//
//     const int l = length(sentence_4);
//     printf("%d\n", l);
//
//     char str1[10];
//     char char1;
//     scanf("%s", str1);
//     fflush(stdin);
//
//     scanf("%c", char1);
//
//     printf("%s\n", str1);
//     printf("%c\n", char1);
//
//     return 0;
// }
//
// int length(char *arr) {
//     int i = 0;
//     while (arr[i++]) {}
//     return i;
// }
