#include <stdio.h>

unsigned bitcount(unsigned x);

unsigned bitcount(unsigned x)
{
    int bits;

    if (x > 0) {
        bits = 1;
        while ((x &= (x - 1)) != 0) {
            ++bits;
        }
        return bits;
    } else {
        return 0;
    }
}

int main()
{
    unsigned input;

    input = 0xfae9;
    printf("The number of 1 bits is: %u\n", bitcount(input));
    return 0;
}
