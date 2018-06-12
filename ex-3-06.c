#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* itoa: convert n to characters in s */

void itoa(int n, char s[], unsigned int width);
void reverse(char s[]);

void itoa(int n, char s[], unsigned int width)
{
    int i, sign;
    unsigned int negated, j, diff;

    if ((sign = n) < 0) {
        negated = -(unsigned int)n;
    } else {
        negated = n;
    }
    i = 0;
    do { /* generate digits in reverse order */
        s[i++] = negated % 10 + '0'; /* get next digit */
    } while ((negated /= 10)); /*delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    diff = width - strlen(s);
    printf ("diff is %d\n", diff);
    if (strlen(s) < width) {
        for (j = 0; j < diff; j++) {
            s[i++] = '*';
        }
        s[i] = '\0';
    }
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main()
{
    char s[100];

    itoa(300, s, 10);

    printf("the output is: %s\n", s);
}

