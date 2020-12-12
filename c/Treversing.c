#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
int a[1000],i,n,count=0;
printf("\nEnter No. of Elements: ");
scanf("%d",&n);
printf("\nEnter List: \n");
srand(time(NULL));
for(i=1;i<=n;i++)
{
a[i]=rand();
printf("\na[%d]=%d\n",i,a[i]);
}
for(i=1;i<=n;i++)
       if(a[i]>=300)
        count++;
printf("\nThere are %d values greater than or equal 300\n",count);
return 0;
}
