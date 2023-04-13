// 7.WAP to find out the sum of n elements of an integer array a[] by using recursion.
#include <stdio.h>
int sum(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (sum(arr, n - 1) + arr[n - 1]);
}
int main()
{
    int n;
    printf("Enter no of array elements :");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of array :");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("SUM= %d\n", sum(arr, n));
    return 0;
}