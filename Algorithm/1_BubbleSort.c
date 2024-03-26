#include <stdio.h>

void ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void descending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[7] = {1, 4, 6, 7, 11, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    ascending(arr,size);
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
    descending(arr,size);
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    
}