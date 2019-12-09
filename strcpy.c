/**
    Own implementation of strcpy() string function
**/

#include <stdio.h>

int* my_strcpy(char dest[], char src[]);

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hey";
    printf("%s", my_strcpy(s1, s2));
    return 0;
}

int* my_strcpy(char dest[], char src[])
{
    int i;
    for(i=0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
