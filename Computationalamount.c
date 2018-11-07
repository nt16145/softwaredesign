#include <stdio.h>
#include <time.h>

void alg1(int);
int main()
{
    int n;
    clock_t start, end;

    for (n = 10000000; n <= 200000000; n += 10000000)
    {
        start = clock();
        alg1(n);
        end - clock();
    }
    return 0;
}

void alg1(int n)
{
    long count = 0;
    int x = 0, y;
    count += 2;
    count += 1;
    for (y = 1; y < n + 3; ++y)
    {
        count += 5;
        x -= y;
    }
    printf("%d,%ld\n", n, count);
}