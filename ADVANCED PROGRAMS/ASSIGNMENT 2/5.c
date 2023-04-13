/* Given an unsorted dynamic array of size n, WAP to find and display the number
of elements between two elements a and b (both inclusive). E.g. Input :
arr = [1, 2, 2, 7, 5, 4], arr=2 and b=5, Output : 4 and the numbers are: 2, 2, 5 ,4 .*/
#include <stdio.h>
int main()
{
    int n, a, b, c = 0, temp = 0, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    int arr[n], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i]; // swapping arr[i] with arr[j]
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nEnter lower limit element & upper limit element respectively: \n");
    scanf("%d %d", &a, &b);

    for (i = 0; i < n; i++)
    {

        if (arr[i] >= a && arr[i] <= b)
        {
            printf("%d \t", arr[i]);

            c++;
        }
    }

    printf(" \n Number of elements in between two elements (Both Inclusive) = %d", c);
    return 0;
}
