#include<stdio.h>
int main()
{
    int pin=1234,entered_pin,balance=5000,withdraw=3000;
    printf("WELCOME TO SBI TRANSACTIONS\n");
    printf("enter your pin:");
    scanf("%d",&entered_pin);
    if(entered_pin==pin)
    {
        printf("pin verified\n");
        printf("enter the amount that you want to withdrawl:");
        scanf("%d",&withdraw);
        if(withdraw<=balance)
        {
            balance-=withdraw;
            printf("withdrawl successfully completed.remaining balance:%d\n",balance);
        }
        else
        {
            printf("Insufficient balance");
        }
    }
    else
    {
        printf("Incorrect pin");
    }
    return 0;
}
