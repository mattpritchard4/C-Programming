#include <stdio.h>

/* Write the function any(s1, s2), which returns the first location
   in the string s1 where any character from the string s2 occurs, or
   -1 if s1 containds no characters from s2. (The standard library
   function strpbrk does the same job but returs a pointer to the location.)*/

int any(char input[], char match[]);

int main()
{
    char foo[] = "this is a test of my code";
    char bar[] = "z";

    printf("%s\n", foo);
    printf("characters to match: %s\n", bar);
    printf("%d\n", any(foo, bar));
    return 0;
}



int any(char input[], char match[])
{
    int i, j;

    for (i = 0; input[i] != '\0'; ++i) {
        for (j = 0; match[j] != '\0'; ++j) {
            if (input[i] == match[j]) {
                return i;
            }
        }
    }
    return -1;
}

