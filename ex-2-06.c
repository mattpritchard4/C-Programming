#include <stdio.h>
#define BITS_PER_INT (8 * sizeof(int))

int extract_tag(int i);
int extract_ptr(int i);
int set_tag(int i, int tag);
int ith_bit(int n, int i);
void print_binary(int n);

/* return the two bottom "tag" bits */
int extract_tag(int i)
{
    return i & 3;
}

 /* returns the top 30 bits, with the bottom two set
    to zero */

int extract_ptr(int i)
{
    return i & ~3;
}

/* return i with the bottom two bits set to the "tag".
   It is assumed that "tag" must be between 0 and 3 */

int set_tag(int i, int tag)
{
    return (i & ~3) | tag;
}

/* returns 0 if the ith bit is 0, 1 if it is 1. Bits
   are numbered 0 to (BITS_PER_INT - 1) */

int ith_bit(int n, int i)
{
    return (n >> i) & 1;
}

/* prints "n" out in binary to stdout, preceded by "0b"
   and with no leading 0s. It will be easiest to write a
   version that prints the leading zeros before fixing
   that "bug". */

void print_binary(int n)
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
    print_binary(11);
    print_binary(193691);
    print_binary(12397195);
    print_binary(397691);
    print_binary(1);
    print_binary(699723465);
    print_binary(98696699);
    print_binary(46);
    /* printf("%d\n", extract_tag(10)); */
    /* printf("%d\n", extract_tag(6429)); */
    /* printf("%d\n", extract_tag(99649)); */
    /* printf("%d\n", extract_ptr(8660)); */
    /* printf("%d\n", extract_ptr(83660)); */
    /* printf("%d\n", extract_ptr(847756)); */
    /* printf("%d\n", set_tag(8663, 2)); */
    /* printf("%d\n", set_tag(8662, 3)); */
    /* printf("%d\n", set_tag(78462, 1)); */
    /* printf("%d\n", set_tag(8669232, 0)); */
    return 0;
}
