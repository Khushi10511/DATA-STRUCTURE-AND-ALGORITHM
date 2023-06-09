// 10. WAP to find the factorial of a number n by writing a recursive function for it.
#include <stdio.h>
int Factorial(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, Factorial(n));
    return 0;
}

int Factorial(int n)
{
    if (n >= 1)
        return n * Factorial(n - 1);
    else
        return 1;
}
