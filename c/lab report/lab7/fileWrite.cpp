#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("d:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      return 0;
   }
for(int i=1;i<=15;i++)
{
   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
}
   fclose(fptr);

   return 0;
}
