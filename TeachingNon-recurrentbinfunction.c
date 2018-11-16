#include <stdio.h>
#include <stdlib.h>

int nonr_bin(int, int);

int main()
{
    int binarray[6][6];
    int n, k;
    for (n = 0; n < 6; n++)
    {
        for (k = 0; k < 4; k++)
        {
            //printf("%3d", bin(n, k));
            nonr_bin(n, k);
            binarray[0][0] = 1;
            printf("%3d", binarray[n][k]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int nonr_bin(int n, int k)
{
    int i, j;                                   //ループ変数
    int **binarray;                             //２次元配列の先頭アドレスのためのポインタ変数
    binarray = malloc((n + 1) * sizeof(int *)); //各行の先頭アドレスのためのポインタ配列を生成
    for (i = 0; i < n + 1; ++i)
    {
        binarray[i] = malloc((k + 1) * sizeof(int)); //各行に一次元配列を格納していく
    }
    //ここからアルゴリズム
    if (n == k)
        // return 1;
        binarray[n][k] = 1;
    if (n > k && k == 0)
        // return 1;
        binarray[n][k] = 1;
    if (n < k)
        // return 0;
        binarray[n][k] = 0;
    //return bin(n - 1, k) + bin(n - 1, k - 1);
    binarray[n][k] = (binarray[n - 1][k] + binarray[n - 1][k - 1]);
    //終了
    for (i = 0; i < n + 1; ++i)
    {
        free(binarray[i]); //各行のメモリ解放
    }
    free(binarray); //ポインタ配列のメモリ解放
}