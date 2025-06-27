//a^b exponent
#include<stdio.h>
int power(int base,int expo)
{
    int result=1;
    for(int i=0;i<expo;i++)
    {
        result*=base;
    }
    return result;
}
int power_result()
{
    int a,b;
    printf("enter base and exponent:\n");
    scanf("%d %d",&a,&b);
    return power(a,b);
}
int main()
{
    int result=power_result();
    printf("Result: %d",result);
    return 0;
} 
