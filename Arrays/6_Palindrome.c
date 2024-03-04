#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int numCopy = num;
    while (num != 0)
    {
        static int reverse = 0;
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    
    return 0;
}