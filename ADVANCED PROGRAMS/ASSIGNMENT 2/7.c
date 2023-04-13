/*7. Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
#include <stdio.h>
int main()
{
    int row, column;
    printf("ENTER THE VALUE OF ROW AND COLUMN: ");
    scanf("%d%d", &row, &column);
    printf("\n");
    int a[row][column], i, j;
    printf("ENTER THE VALUE OF ARRAY: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n");
    printf("THE VALUE OF MATRIX IS : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
    
    // a) Find the number of nonzero elements in A
    int c = 0;
    printf("NON ZERO ELEMENETS ARE: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            if (a[i][j] > 0)
            {
                printf("%d ", a[i][j]);
                c++;
            }
    }
    printf("\n");
    printf("\nNO OF NON ZERO ELEMETS ARE : %d ", c);
    // b) Find the sum of the elements above the leading diagonal.
    int sum = 0;
    printf("\n");
    printf("\nELEMENTS ABOVE LEADING DIAGONAL ARE: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > i)
            {
                printf("%d ", a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }
    printf("\n");
    printf("\nSUM OF ELEMENTS ABOVE LEADING DIAGONAL:%d ", sum);
    // c)Display the elements below the minor diagonal.
    printf("\n");
    printf("\nTHE ELEMENTS BELOW THE MINOR DIAGONAL ARE: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > (row - i - 1))
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    // d)Find the product of the diagonal elements.
    int p = 1;
    for (i = 0; i < row; i++)

        for (j = 0; j < column; j++)

            if (j == i)
                p = p * a[i][j];
    printf("\n");
    printf("\nTHE PRODUCT OF DIAGONAL ELEMENTS IS : %d", p);

    return 0;
}