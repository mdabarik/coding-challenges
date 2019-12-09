/**
    Implement your own strlen() function
**/

#include <stdio.h>

int my_strlen(char str[]);

int main(void)
{
    printf("Length: %i", my_strlen("Hi"));
    return 0;
}

int my_strlen(char str[])
{
    int count = 0, i = 0;
    while(str[i])
    {
        count++;
        i++;
    }
    return count;
}
