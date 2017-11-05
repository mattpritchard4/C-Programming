#include <stdio.h>

/* Write an alternate version of squeeze(s1, s2) that deletes
   each character in s1 that matches any character in the string s2. */

void squeeze(char input[], char delete[]);

int main()
{
    char foo[] = "this is a test of my code";
    char bar[] = "cldeogyha";

    printf("%s\n", foo);
    printf("characters to delete: %s\n", bar);
    squeeze(foo, bar);
    printf("%s\n", foo);
    return 0;
}



void squeeze(char input[], char delete[])
{
    int i, j, k, c;

    for (k = 0; delete[k] != '\0'; ++k) {
        c = delete[k];
        for (i = j = 0; input[i] != '\0'; i++)
            if (input[i] != c) {
                input[j++] = input[i];
            }
        input[j] = '\0';
    }
}

