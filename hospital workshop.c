#include<stdio.h>
int main()
{
    int choice,patient_count=0,age,disease_code;
    float bill,total_bill=0;
    do{
        printf("\n-------Hospital menu -----\n");
        printf("1. add patient\n");
        printf("2.view total bill\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            patient_count++;
            printf("Enter the patient age:");
            scanf("%d",&age);
            printf("Enter the disease type:");
            printf("1. Fever\n");
            printf("2. Infection\n");
            printf("3. surgery\n");
            printf("enter the disease code(1-3):");
            scanf("%d",&disease_code);
            printf("enter estimated bill:");
            scanf("%f",&bill);
            if(disease_code==1)
            {
                printf("disease fever\n");
            }
            else if(disease_code==2)
            {
                printf("disease infection\n");
            }
            else if(disease_code==3)
            {
                printf("disease surgery\n");
            }
            else
            {
                printf("invalid code enter between (1-3)");
            }
        
        total_bill+=bill;
        printf("patient added successfully");
        }
        else if(choice==2)
        {
            printf("\ntotal patients:%d\n",patient_count);
            printf("Total hospital bill: %.2f \n",total_bill);
        }
        else if(choice==3)
        {
            printf("Exiting system,Thank you \n");
        }
        else
        {
            printf("Invalid choice,Try again");
        }
    }
    while(choice==1);
    return 0;
}
