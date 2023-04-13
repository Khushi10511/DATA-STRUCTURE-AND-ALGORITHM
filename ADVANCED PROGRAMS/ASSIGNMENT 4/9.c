// 9.You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.
//  C code to Segregate 0s and 1s in an array
#include <stdio.h>

// Function to segregate 0s and 1s
void segregate0and1(int arr[], int n)
{
    int count = 0; // Counts the no of zeros in arr
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            count++;

    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++)
        arr[i] = 0;

    // Loop fills remaining arr space with 1
    for (int i = count; i < n; i++)
        arr[i] = 1;
}

// Function to print segregated array
void print(int arr[], int n)
{
    printf("Array after segregation is ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// Driver function
int main()
{
    int i, n;
    printf("Enter size of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    segregate0and1(arr, n);
    print(arr, n);
    return 0;
}
