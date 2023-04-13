// 6. WAP to test whether a number num (num is entered through keyboard) is a number in the Fibonacci sequence or not.
#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, t3 = 0, n, flag = 0;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    t3 = t1 + t2;
    if(n==t1||n==t2)
    flag=1;

    while (t3 <= n)
    {
        if (n == t3)
        {
            flag = 1;
            break;
        }
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    if (flag)
        printf("%d is in Fibonacci series", n);
    else
        printf("%d is not in Fibonacci series", n);
    return 0;
}
