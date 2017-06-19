/* Write a program to print the value of EOF. */

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
