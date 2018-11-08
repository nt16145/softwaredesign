#include <stdio.h>

int fact(int);

int main()
{
    int n;
    printf("好きな階上の値:");
    scanf("%d", &n);
    fact(n);
    return 0;
}

int fact(int n)
{
    int result = 1, i;
    if (n == 0)
    {
        printf("1\n");
        return 0;
    }
    for (i = n; i > 0; i--)
    {
        result *= i;
    }
    printf("%d\n", result);
    return 0;
}