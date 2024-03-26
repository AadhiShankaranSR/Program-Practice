#include <stdio.h>

int main()
{
    int n = 28, perfect = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            perfect += i;
    }
    if (n == perfect)
        printf("%d is a Perfect Number", n);
    else
        printf("%d is not a Perfect Number", n);
}