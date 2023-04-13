// 3.WAP to count number of digits of a positive integer n by using recursion.

#include <stdio.h>
int countDigits(int);
int count = 0;
int main()
{
    int number;
    int c;

    printf("Enter a positive integer number: ");
    scanf("%d", &number);

    c = countDigits(number);

    printf("Total digits in number %d is: %d\n", number, c);

    return 0;
}
int countDigits(int num)
{

    if (num > 0)
    {
        count++;
        countDigits(num / 10);
    }
    else
    {
        return count;
    }
}
