/* Write a program to print the value of EOF. */

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
