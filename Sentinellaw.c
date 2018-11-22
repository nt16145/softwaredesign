#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elementcount = 10;
int Sentinel(int[elementcount + 1], int, int);

int searchnumber = 3;
int main()
{
    srand((unsigned)time(NULL));
    int i, result;
    int array[elementcount + 1];
    array[elementcount] = searchnumber; //配列番号は要素数-1のため
    for (i = 0; i < elementcount; i++)
    {
        array[i] = rand() % 10 + 1;
    }
    for (i = 0; i < elementcount + 1; i++)
    {
        if (i == (elementcount))
            printf("| %d", array[i]);
        else
            printf("%d ", array[i]);
    }
    printf("\n");
    //printf("%d\n", Sentinel(array, elementcount, searchnumber));
    result = Sentinel(array, elementcount, searchnumber);
    if (result == -1)
    {
        printf("%dはありません\n", searchnumber);
        return 0;
    }
    else
    {
        printf("%dは%d番目にあります\n", searchnumber, result);
        return 0;
    }
}

int Sentinel(int array[elementcount + 1], int elementcount, int searchnumber)
{
    int i;
    for (i = 0; i < elementcount; i++)
    {
        if (array[i] == searchnumber)
            return i;
    }
    if (array[elementcount] == searchnumber)
        return -1;
    printf("エラー\n");
    return 0;
}