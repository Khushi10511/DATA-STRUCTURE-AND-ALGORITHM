// 1)WAP in  c to create an array and display the reverse of that array.
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
    
    for (i = 0,j = n - 1; i < j; i++, j--)
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
