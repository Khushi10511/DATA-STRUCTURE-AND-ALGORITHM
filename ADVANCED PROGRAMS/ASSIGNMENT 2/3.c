// WAP to search an element in a dynamic array of n numbers.
#include <stdio.h>
int main()
{
    int n, element, pos = 0;
    int i;
    printf("Enter the no of elements of araay\n");
    scanf("%d", &n);
    int a[n];
    printf("enter %d integer numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            printf("%d found at position %d \n", element, i + 1);
            pos = 1;
        }
    }
    if (!pos)
        printf("%d not found.", element);
    return 0;
}