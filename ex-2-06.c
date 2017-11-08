#include <stdio.h>

#define BITS_PER_INT (8 * sizeof(int))
#define LOW_POW (p - (n - 1))
#define HIGH_POW ((BITS_PER_INT - 1) - p)
#define LOW_BITS (x & ((power(2,LOW_POW)) - 1))
#define HIGH_BITS (x & ((power(2,HIGH_POW) - 1)) << (p + 1))

unsigned set_bits(unsigned x, int p, int n, unsigned y);
unsigned getbits(unsigned x, int p, int n);
int power(int initial, int power);
int ith_bit(int n, int i);
void print_binary(unsigned n);

int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned set_bits(unsigned x, int p, int n, unsigned y)
{
    y = getbits(y, (n - 1), n);
    x = (LOW_BITS | HIGH_BITS) | (y << (p - (n - 1)));
    return x;
}

int ith_bit(int n, int i)
{
    return (n >> i) & 1;
}

void print_binary(unsigned n)
{
    int i;
    int first_1;

    printf("0b");
    first_1 = 0;

    for (i = BITS_PER_INT - 1; i >= 0; --i) {
        if (ith_bit(n, i) == 1) {
            putchar('1');
            first_1 = 1;
        } else if (first_1 == 0) {
            ;
        } else {
            putchar('0');
        }
    }
    putchar('\n');
}

int main()
{
    int answer;

    printf("x is:\n");
    print_binary(58827);
    printf("y is:\n");
    print_binary(581);
    printf("n is 4:\n");
    printf("p is 0:\n");
    printf("The bottom n bits (excluding leading zeroes) of y are:\n");
    print_binary(getbits(581, (4 - 1), 4));
    printf("The answer is:\n");
    answer = set_bits(58827, 9, 4, 581);
    print_binary(answer);
    return 0;
}
