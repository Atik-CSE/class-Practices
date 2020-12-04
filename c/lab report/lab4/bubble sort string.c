#include <stdio.h>
#include <string.h>
int main()
{
     int n,i,j;
    char a[20][30],temp[30];
    printf("Enter number of elements :");
scanf("%d",&n);
printf("\nEnter list: ",n);
for(i=0;i<=n;i++)
{
      printf("\nword[%d] : ",i);
      scanf("%s",&a[i]);
}
for(j=1;j<=n;j++)
{
	for(i=0;i<=n-j;i++)
    {
	  if(strcmp(a[i],a[i+1])>0)
	  {
        strcpy(temp,a[i]);
	    strcpy(a[i],a[i+1]);
	    strcpy(a[i+1],temp);
	  }
    }
}
printf("\nSorted elements: :");
for(i=0;i<=n;i++)
printf("\na[%d]= %s ",i,a[i]);
return 0;
}
