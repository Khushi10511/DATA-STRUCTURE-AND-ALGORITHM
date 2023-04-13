// 2.WAP to test whether a number n is palindrome number or not using function.
#include <stdio.h>
int palindrome(int);
int main()
{
    int n;
    int result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = palindrome(n);
    if (n == result)
        printf("%d is a palindrome no", n);
    else
        printf("%d is not a palindrome no", n);
    return 0;
}
int palindrome(int r)
{
    int rev=0;
    while (r > 0)
    {
        int m = r % 10;
        rev = rev * 10 + m;
        r = r / 10;
    }
    return rev;
}
