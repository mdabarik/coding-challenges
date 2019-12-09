/**
    Own implementation of strcmp() string function
**/

#include <stdio.h>

int my_strcmp(char s1[], char s2[]);

int main(void)
{
    printf("%i", my_strcmp("Hello", "Hello"));
    return 0;
}

int my_strcmp(char s1[], char s2[])
{
    for(int i=0; ; i++)
    {
        if(s1[i] == '\0' && s2[i] == '\0')
        {
            return 0;
        }
        int a1 = (int) s1[i];
        int a2 = (int) s2[i];
        if(a1>a2)
            return 1;
        if(a2>a1)
            return -1;
    }
}
