// WAP to reverse the contents of a dynamic array of n elements.
#include <stdio.h>
int main()
{
    int n, c, num, i, j, temp;
    printf("Enter the no of elements of araay\n");
    scanf("%d", &n);
    int a[n];
    printf("enter %d integer numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = n - 1; i < j; i++, j--)
    {

        temp = a[i];

        a[i] = a[j];

        a[j] = temp;
    }
    printf("Reverse of aaray is", n);
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
}
