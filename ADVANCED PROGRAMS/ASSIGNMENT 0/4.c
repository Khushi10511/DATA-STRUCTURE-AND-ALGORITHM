// WAP to display the array elements in ascending order.
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, temp;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
           if (arr[i]>arr[j])
           {
             temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
           }
           
        }
    }
    printf("The elements are in ascending order ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
