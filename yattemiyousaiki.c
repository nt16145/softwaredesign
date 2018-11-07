#include <stdio.h>

int sum(int);

int main()
{
    int x;
    printf("xを入力してください\n");
    scanf("%d", &x);
    x = sum(x);
    printf("%d\n", x);
}

int sum(int x)
{
    if (x < 1)
        return 0;
    else
    {
        return x + sum(x - 1);
    }
}