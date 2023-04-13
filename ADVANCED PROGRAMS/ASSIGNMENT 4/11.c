/*11.WAP to arrange the elements of a dynamic array such that all even numbers
are followed by all odd numbers using a single loop.*/
// C program to segregate even and odd elements of array
#include<stdio.h>

/* Function to swap *a and *b */
void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
	/* Initialize left and right indexes */
	int left = 0, right = size-1;
	while (left < right)
	{
		/* Increment left index while we see 0 at left */
		while (arr[left]%2 == 0 && left < right)
			left++;

		/* Decrement right index while we see 1 at right */
		while (arr[right]%2 == 1 && left < right)
			right--;

		if (left < right)
		{
			/* Swap arr[left] and arr[right]*/
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}

/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/* driver program to test */
int main()
{
	int i, n;
    printf("Enter size of array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	segregateEvenOdd(arr, n);

	printf("Array after segregation ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
