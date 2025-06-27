#include<stdio.h>
int main()
{
    int a[100],n,pos,value;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d",&pos);
    printf("enter the value ");
    scanf("%d",&value);
    for(int i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++;
    printf("after insert operation:");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
