/* Write a program to copy its input to its outpu, replacing each tab
 * by \t, each backspace by \b, and each backslash by \\. This makes
 * tabs and backspaces visible in an unambiguous way. */

#include <stdio.h>

int main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\\') {
            printf("\\");
        }
        if (c == '\t') {
            printf("\\t");
        }
        if (c == '\b') {
            printf("\\b");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
