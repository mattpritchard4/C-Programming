#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n -1] */

int binsearch(int x, int v[], int n);

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low < high) {
        mid = (low + high) / 2;
        if (x <= v[mid])
            high = mid;
        else
            low = mid + 1;
    }
    return (x == v[low]) ? low : -1;
}

int main()
{
    int test[11];
    int n, x, i;

    n = 10;
    x = 4;

    for (i = 0; i < n; ++i) {
        test[i] = i + 1;
    }
    test[n] = '\n';

    printf("%d is found at test[%d]\n", x, binsearch(4, test, n));

    return 0;
}
