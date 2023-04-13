// 12.WAP to add two distances (in km-meter) by passing structure to a function.
#include <stdio.h>

struct distance
{
    int km;
    int m;
};

void addition(struct distance d1, struct distance d2)
{
    struct distance d3;
    d3.km = d1.km + d2.km;
    d3.m = d1.m + d2.m;

    d3.km = d3.km + d3.m / 1000; // 1 km has 1ooo m
    d3.m = d3.m % 1000;

    printf("\nTotal distance- km: %d, m: %d", d3.km, d3.m);
}

int main()
{
    struct distance d1, d2;

    printf("Enter first distance in km & m:");
    scanf("%d%d", &d1.km, &d1.m);

    printf("Enter second distance in km & m:");
    scanf("%d%d", &d2.km, &d2.m);

    /*add two distances*/
    addition(d1, d2);

    return 0;
}
