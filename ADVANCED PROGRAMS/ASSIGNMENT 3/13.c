// 13. Modify 12 to return a structure pointer.
#include <stdio.h>
#include <conio.h>
struct dist
{
    int km;
    int m;
};

void *addition(struct dist, struct dist, struct dist *);

void main()
{
    struct dist d1, d2, d3;
    printf("Enter km and m for 1st system: ");
    scanf("%d%d", &d1.km, &d1.m);
    printf("\nEnter km and m for 2nd system: ");
    scanf("%d%d", &d2.km, &d2.m);
    addition(d1, d2, &d3); 
    printf("\nAddition of two systems is %d km %d m", d3.km, d3.m);
}

void *addition(struct dist dd1, struct dist dd2, struct dist *dd3)
{
    (*dd3).km = dd1.km + dd2.km;
    (*dd3).m = dd1.m + dd2.m;
    if ((*dd3).m >= 1000)
    {
        (*dd3).km++;
        (*dd3).m -= 1000;
    }
    return dd3;
}