// 1. WAP to calculate x^y(x power y) by writing a function(say POWER) for it.
#include <stdio.h>
double power(int, int);
int main()
{
    int x, y;
    double result;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    result = power(x, y);
    printf("%d to the power %d is : %.1lf ",x,y,result);
    return 0;
}
double power(int n, int m)
{
    double r = 1;
    for (int i = 1; i <= m; i++)
        r = r * n;
    return r;
}
