//sorting techniques to find maximum element(quick sort))
#include<stdio.h>
int main()
{
    int a[5],i,key;
    printf("enter numbers to sort:");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>key)
        {
            key=a[i];
        }
    }
    printf("Max element %d:",key);
    return 0;
}
