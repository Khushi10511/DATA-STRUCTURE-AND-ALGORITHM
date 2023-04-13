// 8.WAP to find the LCM of two numbers a and b by using a suitable function (say LCM) for this.
#include <stdio.h>
int LCM(int n1, int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
            break;
        }
        ++max;
    }
}
int main()
{
    int x, y, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    printf("The LCM of %d and %d is %d.", x, y, LCM(x, y));
    return 0;
}
