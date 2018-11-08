#include <stdio.h>

int sum(int);

int main()
{
    int x;
    printf("sum関数の引数:");
    scanf("%d", &x);
    sum(x);
    return 0;
}

int sum(int x)
{
    int i;
    if (x == 0)
    {
        printf("0\n");
        return 0;
    }
}