#include <stdio.h>
void main()
{
int n,total=0;
printf ("Enter a Number : ");
scanf ("%d",&n);
while (n>0)
{
n=n/10;
total++;
}
printf ("%d",total);
}
