#include <stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

void escape(char s[], char t[]) {
    int i, j;
    i = j = 0;

    while ( t[i] != '\0' ) {
        switch( t[i] ) {
        case '\n':
            s[j++] = '\\';
            s[j] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j] = 't';
            break;
        case '\\':
            s[j++] = '\\';
            s[j] = '\\';
            break;
        case '\"':
            s[j++] = '\\';
            s[j] = '\"';
            break;
        default:
            s[j] = t[i];
            break;
        }
        ++i;
        ++j;
    }
    s[j] = t[i];
}

void unescape(char * s, char * t) {
    int i, j;
    i = j = 0;
    while ( t[i] != '\0') {
        switch ( t[i] ) {
        case '\\':
            switch( t[++i] ) {
            case 'n':
                s[j] = '\n';
                break;
            case 't':
                s[j] = '\t';
                break;
            case '\\':
                s[j] = '\\';
                break;
            case '\"':
                s[j] = '\"';
                break;
            default:
                s[j++] = '\\';
                s[j] = t[i];
            }
            break;
        default:
            s[j] = t[i];
        }
        ++i;
        ++j;
    }
    s[j] = t[i];
}

int main() /* count digits, white space, others */
{
    char input[100] = "hello\tworld we have some\n text for you\t \"";
    char escaped[100];
    printf("%s\n", input);
    printf("escaped:\n");
    escape(escaped, input);
    printf("%s\n", escaped);
    unescape(input, escaped);
    printf("unescaped:\n");
    printf("%s\n", input);
}
