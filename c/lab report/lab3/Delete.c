#include <stdio.h>
int main()
{
   int array[100], loc, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location to delete element\n");
   scanf("%d", &loc);

   if (loc > n)
      printf("Deletion not possible.\n");
   else
   {
      for (i = loc - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("After delete:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }

   return 0;
}
