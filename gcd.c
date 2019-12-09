/**
    Title: Finding GCD of two numbers
    # write a program that will find GCD of two given numbers
    Test::
    >>Input 4 6
    >>Output: 2
**/

#include <stdio.h>

int main(void)
{
    int n1, n2, gcd;
    printf("Enter two integers:");
    scanf("%i%i", &n1, &n2);
    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
    }
    printf("GCD: %i", gcd);
    return 0;
}
