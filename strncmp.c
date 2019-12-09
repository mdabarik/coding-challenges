/**
    Own implementation of strncmp() string function
**/

#include <stdio.h>

int my_strncmp(char s1[], char s2[], int n);

int main(void)
{
    printf("%i", my_strncmp("HeLlo", "Hello", 3));
    return 0;
}

int my_strncmp(char s1[], char s2[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(s1[i] == s2[i])
        {
            if(i==(n-1))
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
