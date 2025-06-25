#include<stdio.h>
int main()
{
   int num,sum=0,temp=0;
   printf("enter number:");
   scanf("%d",&num);
   temp=num;
   while(num!=0)
   {
       sum+=num%10;
       num/=10;
   }
   if(temp%sum==0)
   {
       printf("%d is a nivens number.\n",temp);
   }
   else
   {
       printf("%d is not a nivens number.\n",temp);
   }
    return 0;
}
