#include <stdio.h>
#include<string.h>
int main()
{
    char username[10],password[10];
    printf("enter the username:\n");
    scanf("%s",username);
    printf("enter the password:\n");
    scanf("%s",password);
    if(strcmp(username,"habeeba")==0)
    {
        if(strcmp(password,"1234")==0)
        {
            printf("Access granted,welcome admin");
        }
        else
        {
            printf("wrong password");
        }
    }
    else
    {
        printf("wrong username");
    }

    return 0;
}
