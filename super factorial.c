#include<stdio.h>
int main()
{
    int i,j,n,fact,sfact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=1;
        for(int j=1;j<=i;j++)
        {
            fact*=j;
        }
        sfact*=fact;
    }
    printf("Super factorial of the given number %d is %d\n", n,sfact);

        
    return 0;
}
