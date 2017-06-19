/* Write a program to print a histogram of the lengths of words in
 * it's input. INCOMPLETE */

#include <stdio.h>

int main() {

    int c, i, j, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if ( c >= '0' && c <='9') {
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    for (i = 0; i < 10; ++i) {
        printf("%d: ", i);
        for (j = 0; j < ndigit[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}
