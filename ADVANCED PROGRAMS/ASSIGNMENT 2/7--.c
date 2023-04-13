#include <stdio.h>

// FUNCTION DECLARATIONS
void create_matrix(int n, int A[n][n]);
int nonzero_elements(int n, int A[n][n]);
int leading_diagonal_sum(int n, int A[n][n]);
void display_elements_below_minor(int n, int A[n][n]);
int diagonal_product(int n, int A[n][n]);

// MAIN
int main()
{
    // dimensions for nXn square matrix
    int n;
    printf("\nEnter the dimension : ");
    scanf("%d", &n);

    // taking input of elements
    int A[n][n];
    create_matrix(n, A);

    // printing the matrix
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("\t%d", A[i][j]);
        }
    }

    // 1. counting non-zero elements
    int nonzero = nonzero_elements(n, A);
    printf("\nNumber of non-zero elements in the given matrix is '%d'.", nonzero);

    // 2. sum of elements above the leading diagonal
    int leading_sum = leading_diagonal_sum(n, A);
    printf("\nThe sum of elements above the leading diagonal is '%d'.", leading_sum);

    // 3. display the elements below the minor diagonal
    printf("\nElements below the minor diagonal of given matrix :\n");
    display_elements_below_minor(n, A);

    // 5. product of the diagonal elements
    int diagonalProduct = diagonal_product(n, A);
    printf("\nThe product of diagonal elements of the given sq. matrix is '%d'.", diagonalProduct);

    return 0;
}

// FUNCTIONS
void create_matrix(int n, int A[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nFor Row %d -\n", i);
        for (int j = 0; j < n; j++)
        {
            printf("\tElement %d : ", j);
            scanf("%d", &A[i][j]);
        }
    }
}

int nonzero_elements(int n, int A[n][n])
{
    int nonzero = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
                nonzero++;
            }
        }
    }

    return nonzero;
}

int leading_diagonal_sum(int n, int A[n][n])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum += A[i][j];
            }
        }
    }

    return sum;
}

void display_elements_below_minor(int n, int A[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > (n - i - 1))
            {
                printf("\t%d", A[i][j]);
            }
        }
    }
}

int diagonal_product(int n, int A[n][n])
{
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                product *= A[i][j];
            }
        }
    }

    return product;
}