// 7.WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.
/*#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int small(int arr[], int n, int k)
{
    // Sort the given array
    qsort(arr, n, sizeof(int), cmpfunc);

    // Return k'th element in the sorted array
    return arr[k - 1];
}
int main()
{

    int n, k, i;
    printf("Enter the value of n :");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the  elements of array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k :");
    scanf("%d", &k);
    // Function call
    printf("k'th smallest element is %d",
           small(arr, n, k));
    return 0;
}*/
// C code for k largest elements in an array
#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void kLargest(int arr[], int n, int k)
{
    int l = 0;
    // Sort the given array arr in reverse order.
    qsort(arr, n, sizeof(int), cmpfunc);
    // Print the first kth largest elements
    for (int i = 0; i < k; i++)
        l = arr[i];
    printf("kth largest element is : %d" ,l);
}

// driver program
int main()
{
    int n, k, i;
    printf("Enter the value of n :");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the  elements of array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k :");
    scanf("%d", &k);
    kLargest(arr, n, k);
}
