/* Write a program to print a histogram of the lengths of words in
 * it's input. */

#include <stdio.h>

#define IN 0
#define OUT 1

int main() {

    int c, i, j, height, state, length;
    int words[11];

    state = IN;
    height = length = 0;

    for (i = 0; i < 11; ++i) {
        words[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                if (length >= 10) {
                    ++words[10];
                    length = 0;
                }
                else {
                    ++words[length];
                    length = 0;
                }
            }
        }
        else {
            state = IN;
            ++length;
        }
    }


/* determines height of histogram. */

    for (i = 0; i < 11; ++i) {
        if (words[i] > height) {
            height = words[i];
        }
    }

/* prints histogram */

    for (i = height; i > 0; --i) {
        for (j = 0; j < 11; ++j) {
            if (words[j] >= i) {
                printf("| ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < 10; ++i) {
        printf("%d ", i);
    }
    printf("10+ \n");

    return 0;
}
