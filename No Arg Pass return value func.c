#include<stdio.h>
int habeeba()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    return x;
}
int main()
{
    int num=habeeba();
    printf("your value stored in function is %d",num);
}
