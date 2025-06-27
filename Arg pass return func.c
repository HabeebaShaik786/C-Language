#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("enter x:\n");
    scanf("%d",&x);
    printf("enter y:\n");
    scanf("%d",&y);
    int result=add(x,y);
    printf("sum:\n %d",result);
    //printf("output is:\n",add(x,y));
}
