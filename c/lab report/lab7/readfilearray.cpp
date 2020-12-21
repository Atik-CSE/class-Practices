#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("d:\\somenumbers.txt", "r");
    int numberArray[100];
    int i;

    for (i = 0; i < 5; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }


    for (i = 0; i < 5; i++)
    {
        printf("Number is: %d\n\n", numberArray[i]);
    }
}
