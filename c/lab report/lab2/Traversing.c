#include<stdio.h>
int main()
{
    int a[100],i,n,count,sum=0;
    printf("Enter NO. Of Element: ");
    scanf("%d",&n);
    printf("\nEnter List: ");
    for(i=1;i<=n;i++)
    {
        printf("\na[%d]: ",i);
        scanf("%d",&a[i]);
    }
    count=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nsum: %d",sum);
    return 0;
}
