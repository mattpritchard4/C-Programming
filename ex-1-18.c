#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(int size, char to[], char from[]);

/* print the longest input line */

int main() {
    int len; /* current line length */

    char line[MAXLINE]; /* current input line */
    char backward[MAXLINE]; /* longest line saved here */

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
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

void reverse(int size, char to[], char from[]) {
    int i;
    int length;
    int newline;
    int index;
    
    newline = (size - 1);
    length = index = (size - 2);
    from[size] = '\0';
    from[newline] = '\n';
    for (i = 0; i < length; ++i) {
        to[i] = from[index];
        --index;
    }
}
