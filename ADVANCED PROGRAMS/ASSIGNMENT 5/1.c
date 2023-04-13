// 1.WAP to read two polynomial and perform their addition using 1D array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, i;
    printf("Enter the no of terms in the first polynomial :");
    scanf("%d", &m);
    int a[10], b[10];
    printf("Enter the value of first polynomial : \n");
    printf("Enter the coefficients in sequence and enter 0 for no number : \n");
    for (i = 0; i < m; i++)
    {
        printf("Enter the coefficient for power %d", i);
        printf("\n");
        scanf("%d", &a[i]);
    }
    for (i = m; i < 10; i++)
    {
        a[i] = 0;
    }
    printf("The entered polynomial is :");
    for (i = 0; i < m; i++)
    {
        if (i != m - 1)
            printf("%dx^%d +", a[i], i);
        else
            printf("%dx^%d ", a[i], i);
    }
    printf("\n");
    printf("\nEnter the no of terms in the second polynomial :");
    scanf("%d", &n);
    printf("Enter the value of second polynomial : \n");
    printf("Enter the coefficients in sequence and enter 0 for no number : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient for power %d", i);
        printf("\n");
        scanf("%d", &b[i]);
    }
    for (i = n; i < 10; i++)
    {
        b[i] = 0;
    }
    printf("The entered polynomial is :");
    for (i = 0; i < n; i++)
    {
        if (i != n - 1)
            printf("%dx^%d +", b[i], i);
        else
            printf("%dx^%d ", b[i], i);
    }
    int r = (m > n) ? m : n;
    int sum[r];
    for (i = 0; i < r; i++)
    {
        sum[i] = a[i] + b[i];
    }
    printf("\nThe sum of polynomials is :\n");
    for (i = 0; i < r; i++)
    {
        if (i != r - 1)
            printf("%dx^%d +", sum[i], i);
        else
            printf("%dx^%d ", sum[i], i);
    }
    return 0;
}
