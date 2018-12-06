#include <stdio.h>

int is_sorted(int *, int, int);

int main()
{
    int ary[5] = {2, 2, 2, 2, 2};
    int anum = 5; //配列の要素数
    int asc = 1;  //1なら昇順判別、2なら降順判別
    printf("%d\n", is_sorted(ary, anum, asc));
    return 0;
}

int is_sorted(int *ary, int anum, int asc)
{
    //0が未ソート、1がソート済み
    int i;
    if (asc == 0)
    {
        for (i = 0; i < anum; ++i)
        {
            if (ary[i] < ary[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        for (i = 0; i < anum; ++i)
        {
            if (ary[i] > ary[i + 1])
            {
                return 0;
            }
        }
        return 1;
    }
}