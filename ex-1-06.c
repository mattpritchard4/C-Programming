/* Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>


int main()
{
    int c;

    c = (getchar() != EOF);
    printf("%2d\n", c);
    
    return 0;
}

