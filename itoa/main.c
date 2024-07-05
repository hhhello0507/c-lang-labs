#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAXLEN 1000

void itoa(unsigned, char []);
void reverse(char []);

/* itoa: convert n to characters in s */
void itoa(unsigned n, char s[])
{
	int i, sign;

	if ((sign = n) < 0) /* record sign */
		n = -n;         /* make n positive */

	i = 0;
	do {           /* generate digits in revered order */
		s[i++] = n % 10 + '0'; /* get next digit */
	} while ((n /= 10) != 0);   /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/* reverse: reverse the order of the characters in the string s */
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main(void)
{
	char str[MAXLEN];

	itoa(0, str); /* do-while loop is necessary for 0 */
	printf("%i -> %s\n", 0, str);
	itoa(INT_MAX, str);
	printf("%i -> %s\n", INT_MAX, str);
	itoa(INT_MIN, str);
	printf("%i -> %s\n", INT_MIN, str);

	return 0;
}