#include <stdio.h>
#include <math.h>

int main()
{
    int a = 2, b = 4, c = 2;
    int x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    int x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    if(x1 == x2)
        printf("Roots are x1=x2=%d",x1);
    else
        printf("Roots are x1 = %d and x2 = %d",x1,x2);
}