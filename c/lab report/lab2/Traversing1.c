#include<stdio.h>
int main()
{
    int Auto[100],i,n,count=0,year=1982;
    printf("Enter NO. of year : ");
    scanf("%d",&n);
    printf("\nEnter List : ");
    for(i=1;i<=n;i++)
    {
        printf("\nAuto[%d] : ",year);
        scanf("%d",&Auto[i]);
        year=year+1;
    }
    for(i=1;i<=n;i++)
    {
        if(Auto[i]>300)
            count=count+1;
    }
    printf("\nNumber of year greater than 300 automobile were sold: %d",count);
    return 0;
}
