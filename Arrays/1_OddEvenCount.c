#include<stdio.h>
void OddEvenCount(int arr[], int*, int*, int);
void Sum(int*,int,int*);
int main()
{
    int arr[] = {10,20,12,13,14,3,45,70,3,6,7,9,11,23};
    int odd = 0, even = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    OddEvenCount(arr,&odd,&even,n);
    Sum(arr,n,&sum);
    printf("Odd: %d\nEven: %d\nSum: %d\nAverage: %d",odd,even,sum,(sum/n));
}

// To Count the Odd & Even Numbers
void OddEvenCount(int arr[],int* p, int* q, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
            (*q)++;
        else
            (*p)++;
    }
    
}

// To Find the Sum of the elements of array
void Sum(int arr[], int n, int* s)
{
    for (int i = 0; i < n; i++)
    {
        (*s) += arr[i];
    }
}