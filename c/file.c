#include<stdio.h>

void main()
{
FILE *fp;
int i,j;
fp = fopen ("r.doc","w");
for (i=1;i<=5;i++)
{
for (j=1;j<=i;j++)

printf ( "%d",j);
printf ( "\n");}
fclose (fp);
getch();
}



