#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("d:\\somenumbers.txt", "r");

    //read file into array
    int numberArray[100];
    int i;

    for (i = 0; i < 13; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }


    for (i = 0; i < 13; i++)
    {
        printf("Number is: %d\n\n", numberArray[i]);
    }
}
