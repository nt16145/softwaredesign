#include <stdio.h>

int fib(int);

int main()
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("%d番目のフィボナチ数:%d\n", i, fib(i));
    }
    return 0;
}

int fib(int x)
{
    if (0 <= x <= 1)
    {
        return x;
    }
    return fib(x - 2) + fib(x - 1);
}