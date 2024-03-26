#include <stdio.h>

int power(int a, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= a;
    }
    return pow;
}

int ArmstrongNumber(int n)
{
    int numLength = 0, num, arm = 0;
    num = n;
    while (num != 0)
    {
        num /= 10;
        numLength++;
    }
    num = n;
    while (num != 0)
    {
        int prod = num % 10;
        arm += power(prod, numLength);
        num /= 10;
    }
    return arm;
}
int main()
{
    int a = 153;
    if (a == ArmstrongNumber(a))
        printf("%d is an Armstrong Number", a);
    else
        printf("%d is not an Armstrong Number", a);
}