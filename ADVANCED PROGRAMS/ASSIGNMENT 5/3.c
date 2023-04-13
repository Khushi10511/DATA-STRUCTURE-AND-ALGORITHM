// 3. WAP to read two polynomial and perform their multiplication using 1D array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, i, j;
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
    printf("\nEnter the no. of terms in the second polynomial :");
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
    int c = m * n-1;
    int p[c];
    for (i = 0; i < c; i++)
    {
        p[i] = 0;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            p[i + j] += a[i] * b[j];
        }
    }
    printf("The product is : \n");
    for (i = 0; i < c; i++)
    {
        if (i != c - 1)
            printf("%dx^%d +", p[i], i);
        else
            printf("%dx^%d ", p[i], i);
    }
    return 0;
}