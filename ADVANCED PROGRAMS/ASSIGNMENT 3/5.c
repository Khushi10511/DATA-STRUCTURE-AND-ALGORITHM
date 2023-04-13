/*5. WAP to read a number and delete the even location digit of that number.Example : i) input 1234. output is 13.
ii) input 357 output is 37
iii) input 7637272 output is 7322*/
#include <stdio.h>
int main()
{
    int n, new = 0, c = 0, m, i, r, rev = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    m = n;
    while (m > 0)
    {
        r = m % 10;
        rev = rev * 10 + r;
        c++;
        m = m / 10;
    }
    for (i = 1; i <= c; i++)
    {

        if (i % 2 == 0)
        {
            rev = rev / 10;
            continue;
        }
        else
        {
            r = rev % 10;
            new = new * 10 + r;
            rev = rev / 10;
        }
    }
    printf("The new number is %d", new);
    return 0;
}