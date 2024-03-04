#include <stdio.h>

int main() {
    int arr[5] = {10,3,5,7,8};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of an Array: %d",sum);
    
    return 0;
}