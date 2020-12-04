#include<stdio.h>

int main()
{
int a[100],i,n;
printf("Enter No Of Element: ");
scanf("%d",&n);
printf("\nEnter list: \n");
for(i=0;i<n;i++)
{
printf("\na[%d]: ",i);
scanf("%d",&a[i]);
}
printf("\nGiven List: \n");
for(i=0;i<n;i++)
{
printf("\na[%d]=%d",i,a[i]);
}
return 0;
}
