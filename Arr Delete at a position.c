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
    printf("Enter the position to delete:");
    scanf("%d",&pos);
    
    for(int i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    
    n--;
    printf("after delete operation:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
