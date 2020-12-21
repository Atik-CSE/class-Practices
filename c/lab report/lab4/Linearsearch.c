#include<stdio.h>
int main()
{
    int i,a[100],item,loc=0,n;
    printf("Enter No. of Element : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a[i]=rand()%100;
        printf("\n%d",a[i]);
    }
    printf("\nEnter Searching Item : ");
    scanf("%d",&item);
    for(i=1;i<=n;i++)
    {
        if(item==a[i])
        {
            loc=i;
            break;
        }
    }
    if(loc==0)
        printf("\nAbsent");
    else
        printf("\nPresent at location : %d",loc);
    return 0;
}
