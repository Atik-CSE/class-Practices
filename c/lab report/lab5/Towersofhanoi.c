#include <stdio.h>
int n;
void Tower(int n,char a,char b,char c)
{
if(n==1){
    printf("\n%c-------> %c",a,c);}
else{
        Tower(n-1,a,c,b);
        printf("\n%c-------> %c",a,c);
        Tower(n-1,b,a,c);
     }
}
int main()
{
printf("\nEnter Number of Disks: ");
scanf("%d",&n);
Tower(n,'A','B','C');
    return 0;
}

