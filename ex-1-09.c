/* Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank. */

#include <stdio.h>

int main() {

    int c;
    int space;

    space = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (space == 0) {
                putchar(c);
                space = 1;
            }
        }
        if (c != ' ') {
                putchar(c);
                space = 0;
        }
    }
    return 0;
}
