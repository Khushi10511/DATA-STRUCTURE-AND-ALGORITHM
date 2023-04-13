 // WAP in c to insert an element into the array at any position
#include <stdio.h>
int main()
{
    int arr[10], n, i, pos;
    float insert;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d", &n);
    printf("ENTER ARRAY ELEMENTS\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position\n");
    scanf("%d", &pos);
    printf("enter the element to be insert\n");
    scanf("%f", &insert);
    n++;
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = insert;
    printf("Now the array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}