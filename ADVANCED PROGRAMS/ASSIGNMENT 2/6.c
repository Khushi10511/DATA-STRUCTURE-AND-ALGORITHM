/*.Given a dynamic array, WAP to print the next greater
element (NGE) for every element. The next greater element for an element
x is the first greater element on the right side of x in array.
Elements for which no greater element exist, consider next greater
element as -1. E.g. For the input array [2, 5, 3, 9, 7], the next
greater elements for each elements are as follows.
Element             NEG
2                         5
5                         9
3                         9
9                         -1
7                         -1 */
	
#include <stdio.h>
int main()
{
    int n,i,j,next;
    printf("Enter the no of elements of araay\n");
    scanf("%d", &n);
    int a[n];
    printf("enter %d integer numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        next = -1;
        for (j = i+1; j<n; j++)
        {
            if (a[i] < a[j])
            {
                next = a[j];
                break;
            }
        }
        printf("The next greater element for %d -- %d\n", a[i], next);
    }
return 0;
}