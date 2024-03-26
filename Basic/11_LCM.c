#include<stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a = 10, b = 15;
    printf("LCM of %d and %d is %d",a,b,(a*b) / gcd(a,b));
}