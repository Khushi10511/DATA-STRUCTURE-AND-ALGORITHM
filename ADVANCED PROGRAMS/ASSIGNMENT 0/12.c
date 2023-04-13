// 12. WAP to print the numbers which are divisible by 7 and 13 within a range
#include <stdio.h>
int main()
{
    int i, f, l;
    printf("Enter the range within which u want to print the no's :");
    printf("\nEnter the start point :");
    scanf("%d", &f);
    printf("Enter the last point :");
    scanf("%d", &l);
    printf("\n The no's which are divisible by 7 and 13 are :\n");
    for (i = f; i <= l; i++)
    {
        if (i % 7 == 0 && i % 13 == 0)
            printf("%d ", i);
    }
    return 0;
}