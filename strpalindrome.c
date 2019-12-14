/**
    Title: Checking a string palindrome or not
    # Write down a program that will check a string is a palindrome or not
    >> Input: hello -> Not a palindrome
    >> Input: awa -> Palindrome
**/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "awa";
    int i, j;
    int n = strlen(str);
    char str1[n+1];
    for(i=0, j=n-1; i<n; i++, j--)
    {
        str1[i] = str[j];
    }
    str1[i] = '\0';
    if(strcmp(str1, str) == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome!");
    }
    return 0;
}
