#include <stdio.h>

int strlength(char s[])
{
    int i = 0;

    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

int main()
{
    char string[1];
    string[0] = 'a';

    printf("The length of the string is \"hello\" is: %d\n", strlength(string));
}
