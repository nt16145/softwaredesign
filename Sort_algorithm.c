#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_sorted(int *, int, int);
void selection_srot(int *, int, int);
void exchange_sort(int *, int, int);
void insertion_sort(int *, int, int);
int selection_sort_ary[5];
int exchange_sort_ary[5];
int insertion_sort_ary[5];

int main()
{
    srand((unsigned)time(NULL));

    int anum = 5; //配列の要素数
    int ary[anum];
    int asc = 1; //1なら昇順判別、2なら降順判別
    int i;
    for (i = 0; i < anum; ++i)
    {
        ary[i] = rand() % 10 + 1;
    }

    printf("ソート前配列:{ ");
    for (i = 0; i < anum; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("}\n");

    selection_srot(ary, anum, asc);

    printf("基本選択:{ ");
    for (i = 0; i < anum; i++)
    {
        printf("%d ", selection_sort_ary[i]);
    }
    printf("}\n");

    exchange_sort(ary, anum, asc);

    printf("基本交換:{ ");
    for (i = 0; i < anum; i++)
    {
        printf("%d ", exchange_sort_ary[i]);
    }
    printf("}\n");

    insertion_sort(ary, anum, asc);

    printf("基本挿入:{ ");
    for (i = 0; i < anum; i++)
    {
        printf("%d ", insertion_sort_ary[i]);
    }
    printf("}\n");

    if (is_sorted(selection_sort_ary, anum, asc) == 1)
    {
        printf("基本選択は交換済みです\n");
    }
    else
    {
        printf("基本選択は未交換です\n");
    }
    if (is_sorted(exchange_sort_ary, anum, asc) == 1)
    {
        printf("基本交換は交換済みです\n");
    }
    else
    {
        printf("基本交換は未交換です\n");
    }
    if (is_sorted(insertion_sort_ary, anum, asc) == 1)
    {
        printf("基本挿入は交換済みです\n");
    }
    else
    {
        printf("基本挿入は未交換です\n");
    }
    return 0;
}

void selection_srot(int *ary, int anum, int asc)
{
    //int exchange_sort_ary[];
    int minimum_value, i, j, retention;
    if (asc == 1)
    {
        for (i = 0; i < anum - 1; ++i)
        {
            minimum_value = i;
            for (j = i + 1; j < anum; ++j)
            {
                if (ary[j] < ary[minimum_value])
                {
                    minimum_value = j;
                }
            }
            retention = ary[i];
            ary[i] = ary[minimum_value];
            ary[minimum_value] = retention;
            //selection_srot_ary[i] = ary[i];
        }
    }
    else if (asc == 2)
    {
        for (i = 0; i < anum - 1; ++i)
        {
            minimum_value = i;
            for (j = i + 1; j < anum; ++j)
            {
                if (ary[j] > ary[minimum_value])
                {
                    minimum_value = j;
                }
            }
            retention = ary[i];
            ary[i] = ary[minimum_value];
            ary[minimum_value] = retention;
            //selection_srot_ary[i] = ary[i];
        }
    }
    for (i = 0; i < anum; i++)
    {
        selection_sort_ary[i] = ary[i];
    }
}

void exchange_sort(int *ary, int anum, int asc)
{
    int i, j, retention;
    if (asc == 1)
    {
        for (i = anum - 2; i >= 0; --i) //ソート済みでない部分の最終添字
        {
            for (j = 0; j <= 1; ++j) //ソート済みでない走査部の添字
            {
                if (ary[j] > ary[j + 1])
                {
                    retention = ary[j];
                    ary[j] = ary[j + 1];
                    ary[j + 1] = retention;
                }
            }
        }
    }
    else if (asc == 2)
    {
        for (i = anum - 2; i >= 0; --i)
        {
            for (j = 0; j <= 1; ++j)
            {
                if (ary[j] < ary[j + 1])
                {
                    retention = ary[j];
                    ary[j] = ary[j + 1];
                    ary[j + 1] = retention;
                }
            }
        }
    }
    for (i = 0; i < anum; i++)
    {
        exchange_sort_ary[i] = ary[i];
    }
}

void insertion_sort(int *ary, int anum, int asc)
{
    int i, j, k, retention, place_keep;
    if (asc == 1)
    {
        for (i = 1; i < anum; ++i)
        {
            for (j = i; j >= 1; ++j)
            {
                if (ary[i] > ary[j])
                {
                    retention = ary[j];
                    ary[j] = ary[i];
                    ary[i] = retention;
                }
                else
                {
                    break;
                }
            }
        }
    }
    else
    {
        for (i = 1; i < anum; ++i)
        {
            for (j = i; j >= 1; ++j)
            {
                if (ary[i] < ary[j])
                {
                    retention = ary[j];
                    ary[j] = ary[i];
                    ary[i] = retention;
                }
                else
                {
                    break;
                }
            }
        }
    }
    for (i = 0; i < anum; ++i)
    {
        insertion_sort_ary[i] = ary[i];
    }
}

int is_sorted(int *ary, int anum, int asc)
{
    //0が未ソート、1がソート済み
    int i;

    if (asc == 2) //降順判別
    {
        for (i = 0; i < anum - 1; ++i)
        {
            if (ary[i] < ary[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }
    else //昇順判別
    {
        for (i = 0; i < anum - 1; ++i)
        {
            if (ary[i] > ary[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }
}