#include <stdio.h>
#include <ctype.h>
#include <string.h>

void is_largest(int n);

void is_largest(int n)
{
    if ((n < 0) && (n == -n))
        printf("%d is the largest negative number.\n", n);
    else
        printf("%d is not the largest negative number.\n", n);
}

int main()
{
    int x, y, z;

    x = 0;
    y = -2147483647;
    z = -2147483648;

    is_largest(x);
    is_largest(y);
    is_largest(z);

    return 0;
}
