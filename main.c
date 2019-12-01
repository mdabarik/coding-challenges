#include <stdio.h>

int main(void)
{
    int n;
    printf("Please enter an integer:");
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
