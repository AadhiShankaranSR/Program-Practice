#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int numCopy = num;
    int reverse = 0;
    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }

    if (numCopy == reverse)
    {
        printf("%d is a Palindrome", reverse);
    }
    else
    {
        printf("%d is not a Palindrome", numCopy);
    }

    return 0;
}