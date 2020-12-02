#include <stdio.h>
#define PI 3.1416
float area (int radious);
void main ()
{
int r;
float a;
scanf("%d",&r);
a=area(r);
printf ("%.2f",a);
}
float area (int radi)
{
return PI*radi*radi;
}
