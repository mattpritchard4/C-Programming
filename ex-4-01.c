#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strrindex(char s[], int t)
{
    int i, end;

    end = strlen(s);
    for (i = end; i >= 0; i--) {
        if (s[i] == t) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char string[100] = "Jet fuel can\'t melt steel beams";
    char character = 'b';
    printf("The length of the input string is %lu.\n", strlen(string));
    if (strrindex(string, character) == -1) {
        printf("Character %c does not appear in the string.\n", character);
    } else {
        printf("The leftmost occurence of character %c appears at index %d.\n",
               character, strrindex(string, character));
    }
}
