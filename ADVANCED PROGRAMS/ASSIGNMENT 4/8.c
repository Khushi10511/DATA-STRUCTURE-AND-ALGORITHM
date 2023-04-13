// 8.WAP to find the largest number and counts the occurrence of the largest number in a dynamic array of n integers using a single loop.
#include <conio.h>
#include <stdio.h>
int main()
{
    int n, i, max, c = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe value of the array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            if (max != arr[i])
                c = 0;

            if (arr[i] == max)
                c++;
            max = arr[i];
        }
    }
    printf("\nThe largets no in the array is %d and the no of times of its occurence is %d", max, c + 1);
    return 0;
}