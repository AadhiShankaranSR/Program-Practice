#include<stdio.h>

void rotate(int arr[], int n)
{
    int last_element = arr[n-1];
    for (int i = n-1; i >= 0; i--)
    {
        if (i-1 >= 0)
        {
            arr[i] = arr[i-1];
        }
    }
    arr[0] = last_element;  
}

int main()
{
    int array[] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    rotate(array,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }  
}