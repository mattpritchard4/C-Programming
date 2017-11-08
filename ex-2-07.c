/* Write a function invert(x,p,n) that returns x with the n bits that
   begin at position p inverted (i.e., 1 chaged into 0 and vice versa),
   leaving the others unchanged. */

/* Plan:
   1. Assign the n bits in x starting at position p to a variable
   (use getbits())
   2. Invert the bits of the variable from step 1 using ~
   3. Left shift the result by (p - (n - 1)) to move these inverted bits
   into position
   4. Mask off bits higher than position p to zero out unwanted 1's.
   5. Mask off the top and bottom bits of x, excluding n bits starting
   at position p
   6. "|" the two masks from step 5 to obtain x with n bits from position
   p set to zero
   7. "|" the result from step 7 with the result from step 4
*/

#include <stdio.h>

#define BITS_PER_INT (8 * sizeof(int))
#define LOW_POW (p - (n - 1))
#define HIGH_POW ((BITS_PER_INT - 1) - p)
#define LOW_BITS (x & ((power(2,LOW_POW)) - 1))
#define HIGH_BITS (x & ((power(2,HIGH_POW) - 1)) << (p + 1))

unsigned set_bits(unsigned x, int p, int n);
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

unsigned set_bits(unsigned x, int p, int n)
{
    unsigned to_invert, shifted, ones;

    ones =  (~0 & (power(2,n) - 1)) << (p - (n -1));
    to_invert = getbits(x, p, n);
    shifted = (to_invert << (p - (n - 1)));

    x = x ^ shifted;
    x = x | ones;
    x = x ^ shifted;

    print_binary(x);
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
    unsigned input;

    input = 97652;
    print_binary(input);
    set_bits(input, 7, 6);
    return 0;
}


/* 010 */
/* 010^ */
/* 000 */

/* 111~ */
/* 010^ */
/* 101 */
