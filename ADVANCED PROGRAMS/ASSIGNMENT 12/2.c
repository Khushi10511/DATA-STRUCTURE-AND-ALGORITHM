// 2. IMPLEMENT OPTIMIZED BUBBLE SORT.
#include <stdio.h>
#include <conio.h>
void o_bubble_sort(int arr[], int n);
void main()
{
    int i, n;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    o_bubble_sort(arr, n);
    printf("\n The sorted array is: \n");
    for (i = 0; i < n; i++)
        printf(" %d\t", arr[i]);
}
void o_bubble_sort(int arr[], int n)
{
    int i, j, temp, flag = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (flag == 0) // array is sorted
            return;
    }
}
