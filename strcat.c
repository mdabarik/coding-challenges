/**
    Own implementation of strcat() string function
**/

#include <stdio.h>

int* my_strcat(char s1[], char s2[]);

int main(void)
{
    char s1[] = "Hello ";
    char s2[] = "World!";
    printf("%s", my_strcat(s1, s2));
    return 0;
}

int* my_strcat(char s1[], char s2[])
{
    int i, j;
    for(i=0; s1[i] != '\0'; i++);
    for(j=0; s2[j] != '\0'; j++)
        s1[i+j] = s2[j];
    s1[i+j] = '\0';
    return s1;
}
