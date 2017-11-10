/* Write a function rightrot(x,n) that returns the value of the integer x
   rotated to the right by n bit positions. */

#include <stdio.h>

#define BITS_PER_INT (8 * sizeof(int))

unsigned getbits(unsigned x, int p, int n);
int ith_bit(int n, int i);
void print_binary(unsigned n);
unsigned rightrot(unsigned x, unsigned n);

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned rightrot(unsigned x, unsigned n)
{
    return (x << (BITS_PER_INT - n)) | (x >> n);
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
    unsigned input;

    input = 0xF0F0F0F0;
    print_binary(input);
    print_binary(rightrot(input, 9));
    return 0;
}
