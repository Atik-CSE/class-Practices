#include <stdio.h>
int main()
{
int a[1000],i,n,item,loc;
printf ("\nEnter No. of Elements:");
scanf ("%d",&n);
printf ("\nEnter List:");
for (i=1;i<=n;i++)
{
printf ("\na[%d]:",i);
scanf ("%d",&a[i]);
}
label:
printf ("\nEnter Inserting Location:");
scanf ("%d",&loc);
printf ("\nEnter Inserting Item:");
scanf ("%d",&item);
for (i=1;i>=loc;i--)
{
a[i+1]=a[1];
}
a[loc]=item;
n=n+1;
printf ("\nList after Insert:");
for (i=1;i<=n;i++)
{
printf ("\n[%d]=%d",i,a[i]);
}
int r;
printf("\nif you want to continue inserting.Type: 1 or ");
printf ("\nif want to close here your inserting.Type: any number.");
printf ("\nType:");
scanf ("%d",&r);
if (r==1)
goto label;
printf ("\nClose.\n");
}
