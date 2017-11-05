/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN 0
#define OUT 1

int main() {

    int c, state;

    state = IN;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                putchar('\n');
            }
        }
        else {
           state = IN;
           putchar(c);
        }
    }
    return 0;
}
