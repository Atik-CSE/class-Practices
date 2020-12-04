#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[100], n, temp, i, j;
   printf("Enter number of elements in array: ");
   scanf("%d",&n);
   printf("Enter list: ",n);
   srand(time(NULL));
   for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("\n%d",a[i]);
    }
   for(i=n-2;i>=0;i--)
    {
      for(j=0;j<=i;j++)
      {
        if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
      }
   }
   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf("\na[%d]= %d ",i,a[i]);
   return 0;
}
