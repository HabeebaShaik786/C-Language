#include<stdio.h>
int calc(int num)
{
    printf("square of %d is %d\n",num,num*num);
}
int input()
{
    int x;
    printf("enter a values:");
    scanf("%d",&x);
    calc(x);
    
}
int main()
{
    input();
    return 0;
}
