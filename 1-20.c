#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define TAB_WIDTH 3

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main() {
    int len; /* current line length */
    int i;
    int j;
    

    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    while ((len = get_line(line, MAXLINE)) > 0) {
        copy(longest, line);
        len = len - 1;
        for (i = 0; i < len; ++i) {
            if (longest[i] == '\t') {
                for (j = 0; j < TAB_WIDTH; ++j) {
                    printf(" ");
                }
            }
            else {
                printf("%c", longest[i]);
            }
        }
        printf("\n");
    }
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
