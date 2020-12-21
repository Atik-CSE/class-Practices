#include<stdio.h>
int main()
{
    int a[100],i,n,item,loc;
    printf("Enter No. OF Element :");
    scanf("%d",&n);
    printf("\Enter List :");
    for(i=1;i<=n;i++)
    {
        printf("\na[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter inserting location :");
    scanf("%d",&loc);
    printf("\nEnter inserting item :");
    scanf("%d",&item);
    for (i=n;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=item;
    n=n+1;
    printf("\nList after insrting :\n");
    for(i=1;i<=n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}
