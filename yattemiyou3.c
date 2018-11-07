#include <stdio.h>

int bin(int, int);

int main()
{
    int n, k;
    for (n = 0; n < 6; n++)
    {
        for (k = 0; k < 4; k++)
        {
            printf("%3d", bin(n, k));
        }
        printf("\n");
    }
    printf("\n");
}

int bin(int n, int k)
{
    if (n == k)
        return 1;
    if (n > k && k == 0)
        return 1;
    if (n < k)
        return 0;
    return bin(n - 1, k) + bin(n - 1, k - 1);
}