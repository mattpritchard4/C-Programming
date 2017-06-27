#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main() {
    int i;
    int last;
    int end;
    int len; /* current line length */

    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    while ((len = get_line(line, MAXLINE)) > 0) {
        copy(longest, line);
        last = 0;
        end = 0;

        for (i = len; i > 0; --i) {
            if (line[i] == '\n' || line[i] == '\t' || line[i] == '\0') {
                /*makes sure trailing \0 \t \n characters are not counted*/
                last = last; 
            }
            else {
                last = i;
                /* saves position of last character that isn't
                 * trailing \t or \n. adds one to end so for loop
                 * tests every element up to trailing \n or \t */
                if (last > end) {
                    end = last + 1;
                }
            }
        }
        /* prints each character of input, ignoring trailing \n's and
         * \t's. */
        for (i = 0; i < end; ++i) {
            printf("%c", longest[i]);
        }
    }
    printf("\n");
    return 0;
}

/* get_line: read a line into s, return length */

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */

void copy(char to[], char from []) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
