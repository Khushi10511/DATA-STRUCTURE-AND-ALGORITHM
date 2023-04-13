// WAP to sort a dynamic array of n numbers.
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the no of elements of araay\n");
    scanf("%d", &n);
    int a[n];
    printf("enter %d integer numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i]; // swapping a[i] with a[j]
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Elements are now in ascending order: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}