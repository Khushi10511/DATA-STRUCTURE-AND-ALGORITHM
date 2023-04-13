/*10.WAP to swap all the elements in the 1st column with all the corresponding
elements in the last column, and 2nd column with the second last column
and 3rd with 3rd last etc. of a 2-D dynamic array. Display the matrix.*/
#include <stdio.h>
#include <stdlib.h>
// Implement function Input Matrix
void InpMat(int **mat, int rows, int cols) //
{
    printf("Please enter elements matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            scanf("%i", &mat[i][j]);
    }
    printf("\nEntered matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%3d", mat[i][j]);
        printf("\n");
    }
}
// Implement function Out matrix
void OutMat(int **mat, int rows, int cols) //
{
    printf("===============================================================\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%3d", mat[i][j]);
        printf("\n");
    }
}
// Function ChangeMat -swap all the elements in the 1st column with all the corresponding elements in the last column....
// Formal give Matrix- r-rows,c-columns swap all element 1-columns with c columns ..
void ChangeMat(int **mat, int rows, int cols)
{
    int l = 0;
    int r = cols - 1;
    while (l < r)
    {
        for (int i = 0; i < rows; i++)
        {
            int temp = mat[i][l];
            mat[i][l] = mat[i][r];
            mat[i][r] = temp;
        }
        l++;
        r--;
    }
}
int main()
{
    // Alloc dynamic memory
    int rows, cols;
    printf("Please enter rows and columns of matrix:\n");
    scanf("%i%i", &rows, &cols);
    int **mat = (int **)malloc(sizeof(int *) * (size_t)rows); // size_t=unsigned int
    for (int i = 0; i < rows; i++)
        mat[i] = (int *)malloc(sizeof(int) * (size_t)cols);
    InpMat(mat, rows, cols);
    ChangeMat(mat, rows, cols);
    OutMat(mat, rows, cols);
    free(mat);
    return 0;
}