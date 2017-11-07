#include <stdio.h>

/* Write the function any(s1, s2), which returns the first location
   in the string s1 where any character from the string s2 occurs, or
   -1 if s1 containds no characters from s2. (The standard library
   function strpbrk does the same job but returs a pointer to the location.)*/

int extract_tag(int i);
int extract_ptr(int i);
int set_tag(int i, int tag);

int main()
{
    printf("%d\n", extract_tag(10));
    printf("%d\n", extract_ptr(8660));
    printf("%d\n", set_tag(8663, 1));
}

int extract_tag(int i)
{
    return i & 3;
}

int extract_ptr(int i)
{
    return i & ~3;
}

int set_tag(int i, int tag)
{
    return (i & ~3) | tag;
}
