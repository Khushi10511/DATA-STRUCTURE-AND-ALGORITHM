/*1.Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance
between x and y in arr. The array might also contain duplicates. You may
assume that both x and y are different and present in arr.
Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6
Output: Minimum distance between 3 and 6 is 4.*/
#include <stdio.h>
using namespace std;
int main()
{
    int f, n, i, x, y, c = 0, flag = 0;
    printf("Enter the limit of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array elements are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the value of x and y :");
    scanf("%d %d", &x, &y);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            f = i;
    }
    for (i = f; i < n; i++)
    {
        if (arr[i] == y)
        {
            flag = 1;
            break;
        }
        else
            c++;
    }
    if (flag == 1)
        printf("The minimum distance between x and y is %d", c);
    else
        printf("The number is not there in the array  ");
    return 0;
}