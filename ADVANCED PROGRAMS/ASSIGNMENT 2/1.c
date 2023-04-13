// 1. WAP to find out the smallest and largest element stored in an array of n integers.//
#include <stdio.h>
int main()
{
    int i, n, max, min;
    printf("Enter the no of elements of array\n");
    scanf("%d", &n);
    int a[n];
    printf("enter %d integer numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for (i = 0; i < n; i++)
    {

        if (min > a[i])
    min = a[i];

        if (max < a[i])
            max = a[i];
    }
    printf("The largest no in aaray is %d \n", max);
    printf("The smallest no in aaray is %d ", min);
    return 0;
}