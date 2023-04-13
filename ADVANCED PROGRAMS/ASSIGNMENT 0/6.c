// WAP to multiply two matrices and display it.
#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter your first matrix\n");
    printf("Elements\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Elements\n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second matrix\n");
    printf("Elements\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Elements\n");
            scanf("%d", &b[i][j]);
        }
    }

      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4-1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j]=sum;
            sum=0;
            
        }
    }
    //print matrix
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}