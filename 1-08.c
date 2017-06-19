/* Write a program to print the value of EOF. */

#include <stdio.h>


int main()
{
    int c, nl, tab, blank;

    nl = 0;
    tab = 0;
    blank = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++tab;
        }
        if (c == ' ') {
            ++blank;
        }
    }
    printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", nl, tab, blank);
    return 0;
}
