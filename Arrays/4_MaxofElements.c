#include <stdio.h>

int main() {
    int arr[5] = {1,4,6,7,2};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        printf("Max of an Array%d",max);
    }
    
    return 0;
}