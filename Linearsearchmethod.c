#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elementcount = 10;
int Linearsearch(int[elementcount], int, int);

int searchnumber = 3;
int main()
{
    srand((unsigned)time(NULL));
    int i;
    int array[elementcount];
    for (i = 0; i < elementcount; i++)
    {
        array[i] = rand() % 10 + 1;
    }
    for (i = 0; i < elementcount; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("%d\n", Linearsearch(array, elementcount, searchnumber));
}

int Linearsearch(int array[elementcount], int elementcount, int searchnumber)
{
    int i;
    for (i = 0; i < elementcount; i++)
    {
        if (array[i] == searchnumber)
            return i;
    }
    return -1;
}