// 4. WAP to find the first digit of a number using function. Example : if the number is 1234. output is 1.
#include <stdio.h>
int FirstDigit(int);
int main()
{
    int Number;

    printf("\n Please Enter any Number that you wish  : ");
    scanf("%d", &Number);

    printf(" \n The First Digit of a Given Number %d =  %d", Number, FirstDigit(Number));

    return 0;
}
int FirstDigit(int n)
{
    while (n >= 10)

        n = n / 10;

    return n;
}