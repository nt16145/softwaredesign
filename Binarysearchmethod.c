#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elementcount = 10;
int Binarysearch(int[elementcount], int, int);

int searchnumber = 3;
int main()
{
    int i;
    int array[elementcount];
    for (i = 1; i < elementcount + 1; i++)
    {
        array[i - 1] = i;
    }
    for (i = 0; i < elementcount; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("%d\n", Binarysearch(array, elementcount, searchnumber) + 1);
}

int Binarysearch(int array[elementcount], int elementcount, int searchnumber)
{
    int low = 1, high = elementcount;
    while (1)
    {
        if (array[0] > searchnumber || array[elementcount - 1] < searchnumber)
            return -1; //範囲外検出
        else if (array[(high - low) / 2] == searchnumber)
            return ((high - low) / 2);
        else if (array[(high - low) / 2] < searchnumber)
        {
            printf("%d\n", ((high - low) / 2));
            low = ((high - low) / 2) + 1;
            high = high;
            printf("%d\n", ((high - low) / 2));
        }
        else
        {
            printf("%d\n", ((high - low) / 2));
            low = low;
            high = ((high - low) / 2) + 1;
            printf("%d\n", ((high - low) / 2));
        }
    }
}
//これでいいのか？