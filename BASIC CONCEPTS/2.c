#include <stdio.h>
#include <string.h>
struct Display
{
    char title[100];
    char author[100];
    char publication[100];
    float price;
} d[100];
int main()
{
    int i;
    char f[100];
    for (i = 0; i < 5; i++)
    {
        printf("FOR BOOK %d \n", (i + 1));
        printf("Enter book title :");
        scanf("%s", &d[i].title);
        printf("Enter book author name :");
        scanf("%s", &d[i].author);
        printf("Enter book publication :");
        scanf("%s", &d[i].publication);
        printf("Enter book price :");
        scanf("%f", &d[i].price);
        printf("\n");
    }
    printf(" DISPLAYING INFORMATION ");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("BOOK INFORMATION %d \n", i);
        printf("BOOK TITLE : %s \n", d[i].title);
        printf("BOOK PUBLICATION :%s \n", d[i].publication);
        printf("BOOK PRICE :%f \n", d[i].price);
        printf("\n");
    }
}