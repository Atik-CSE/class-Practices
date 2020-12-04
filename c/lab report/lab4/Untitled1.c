#include<stdio.h>
int main()
{
    char input[10];
    printf("Vaiya,do you want to give me a treat today??\n");
    printf("Type .... yes or no\n");
    scanf("%s",&input);

    int d = strcmp(input,"yes");
    int D = strcmp(input,"no");
    if(d==0)
    {
        printf("Thank you vaiya, then tomorrow I also give you a treat.\n");
    }
    else
    {
        printf("Oh!! Ok I'm angry with you!!\n");
    }
    getch();
}
