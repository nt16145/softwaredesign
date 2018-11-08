#include <stdio.h>
#include <stdlib.h>

int nonr_fib(int);

int main()
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("%d番目のフィボナッチ数 = %d\n", i, nonr_fib(i));
    }
    return 0;
}

int nonr_fib(int x)
{
    int *resultary; //記録用配列
    int i, result;  //freeのための結果保存用変数
    if (x <= 1)     //x2以上の場合のみ計算
        return x;
    resultary = malloc((x + 1) * sizeof(int)); //x+1個分のint型メモリ配列確保
    resultary[0] = 0;
    resultary[1] = 1;
    for (i = 2; i < x + 1; ++i)
    {
        resultary[i] = resultary[i - 1] + resultary[i - 2];
    }
    result = resultary[x];
    free(resultary);
    return result;
}