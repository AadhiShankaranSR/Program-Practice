#include<stdio.h>

int main() {
    int a = 0, b = 1;
    int n = 25;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a);
        int temp = b;
        b = a + b;
        a = temp;
    }
}