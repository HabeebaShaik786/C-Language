//lexciographical sorting
#include<stdio.h>
#include<string.h>
int main()
{
    char words[10][10];//size and number of words
    int i,j;
    char temp[20];
    for(i=0;i<5;i++)
    {
        printf("enter word %d:",i+1);
        scanf("%s",words[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(words[i], words[j])>0)
            {
                int k=0;
                while(words[i][k]!='\0' || words[j][k]!='\0')
                {
                    temp[k]=words[i][k];
                    words[i][k]=words[j][k];
                    words[j][k]=temp[k];
                    k++;
                }
            }
        }
    }
    printf("sorted in lexciographical order. \n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",words[i]);
    }
    return 0;
}
