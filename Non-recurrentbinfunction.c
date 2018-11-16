#include <stdio.h>

int bin(int, int);
int bin2(int, int);
//int binarray[6][4];
int main()
{
    int n, k;
    for (n = 0; n < 6; n++)
    {
        for (k = 0; k < 4; k++)
        {
            //printf("%3d", bin(n, k));
            bin(n, k);
            binarray[0][0] = 1;
            printf("%3d", binarray[n][k]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int bin(int n, int k)
{
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
    return 0;
}

int bin2(int n, int k)
{
    int **binarray;

    int i, j;
    int result;
    binarray = malloc(2 * sizeof(int));
    for (i = 0; i < 2; ++i)
    {
        binarray[i] = malloc((k + 1) * sizeof(int));
    }

    for (i = 0; i < n + 1; ++i)
    {
        for (j = 0; j < k + 1; ++j)
        {
            if (j == 0)
            {
                binarray[i % 2][j] = 1;
            }
            else if (i == J)
            {
                binarray[i % 2][j] = 1;
            }
            else if (j > i)
            {
                binarray[i % 2][j] = 0;
            }
            else
            {
                binarray[i % 2][j] = binarray[(i - 1) % 2][j] + binarray[(i - 1)]
            }
        }
    }
}