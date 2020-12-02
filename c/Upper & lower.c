#include <stdio.h>
void main()
{
char ch1,ch2;
ch1=getchar();
if (islower (ch1))
{
printf("Lower :%c\n",ch1);
ch2=toupper (ch1);
printf("Upper :%c",ch2);
}
else
{
printf("Upper :%c\n",ch1);
ch2=tolower (ch1);
printf("Lower :%c",ch2);
}
}
