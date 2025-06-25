#include <stdio.h>
int main() 
{
    int num,sum=0,temp,digit,fact;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
       digit=temp%10;
       fact=1;
for(int i=1;i<=digit;i++)
{
fact*=i;
    }
sum+=fact;
temp/=10;
}
    if(num==sum){
        printf("%d is strong number.\n",num);
    }
    else{
        printf("%d is not a strong number.",num);
    }
    return 0;
