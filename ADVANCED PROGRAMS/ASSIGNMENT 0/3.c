// WAP to find largest element stored in an array.
#include <stdio.h>
int Max(int arr[], int n);
int main()
{
    int arr[100], n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = Max(arr, n);
    printf("The largest element is : %d \n", max);
    return 0;
}

int Max(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}