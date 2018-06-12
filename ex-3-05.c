#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* itoa: convert n to characters in s */

void itob(int n, char s[], int b);
void reverse(char s[]);

void itob(int n, char s[], int b)
{
    int i, sign, remainder;

    sign = n;
    i = 0;
    do {
        remainder = n % b;

        if (sign < 0) {
            remainder = -remainder;
        }
        if (remainder <= 9) {
            s[i++] = remainder + '0';
        } else if (remainder > 9) {
            s[i++] = (remainder - 10) + 'A';
        }
    } while ((n /= b)); /*delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
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
    int base;

    base = 16;
    itob(30, s, base);

    printf("the output is base-%d: %s\n", base, s);
}
