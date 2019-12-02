/**
    Title: Palindrome
    # Write a program that will check a given number is a palindrome or not
    :Test: =>
    Input: 123 => Not a palindrome
    Input: 121 => It's a palindrome
**/

#include <stdio.h>

int isPalindrome(int);

int main(void)
{
    int num;
    printf("Enter an integer:");
    scanf("%i", &num);
    if(isPalindrome(num))
    {
        printf("It's a palindrome!");
    }
    else
    {
        printf("It's not a palindrome!");
    }
    return 0;
}

int isPalindrome(int n)
{
    int num = n, reversed = 0, reminder;
    while(n!=0)
    {
        reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }
    return reversed == num;
}
