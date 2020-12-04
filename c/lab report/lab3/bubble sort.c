#include<stdio.h>

int main()
{
    int a[100], n, temp, i, j;
   printf("Enter number of elements in array: ");
   scanf("%d",&n);
   printf("Enter list: ",n);
   for(i=0;i<n;i++)
    {
        printf("\na[%d] : ",i);
        scanf("%d",&a[i]);
    }
   for(j=1;j<=n;j++)
    {
      for(i=1;i<=n-j;i++)
      {
        if(a[i]>a[i+1])
        {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
        }
      }
   }
   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf("\na[%d]= %d ",i,a[i]);
   return 0;
}
