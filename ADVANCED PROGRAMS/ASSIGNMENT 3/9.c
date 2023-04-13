//9. WAP by designing a recursive function to calculate the sum of all even digits of any given integer.
#include <stdio.h>
int sum(int n)
{
	if (n == 0)
	return 0;
    if(n%2==0)
	return (n % 10 + sum(n / 10));
    else
    return(sum(n/10));
}

// Driven Program to check above
int main()
{
	int num ;
    printf("Enter a number :");
    scanf("%d",&num);
	int result = sum(num);
	printf("Sum of digits in %d is %d\n", num, result);
	return 0;
}
