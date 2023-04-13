// WAP to add two matrices and display it.
#include <stdio.h>
int main()
{
    int m, n, c, d, a[10][10], b[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of a matrix\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &a[c][d]);
    printf("Enter the elements of b matrix\n");
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &b[c][d]);
    printf("Sum of entered matrices:-\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = a[c][d] + b[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    return 0;
}