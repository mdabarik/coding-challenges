/**
    Title: Second largest of three number(Ternary operator)
    # Write a program that will takes three integer
    # find the second of the three number using
    # ternary operator
**/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three integers:");
    scanf("%i%i%i", &a, &b, &c);
    int sl = (a>b&&a>c) ? (b>c?b:c) : (b>a&&b>c) ? (a>c?a:c) : a>b?a:b;
    printf("Second largest: %i", sl);
    return 0;
}
