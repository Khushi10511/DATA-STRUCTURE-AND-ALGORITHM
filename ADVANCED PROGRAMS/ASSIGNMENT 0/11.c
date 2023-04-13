// 11. WAP to swap two numbers using call by reference.
#include <stdio.h>
void swap(int *, int *); 
int main()
{
    int a;
    int b ;
    printf("Enetr values of a and b :");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values in main a = %d, b = %d\n", a, b); 
    swap(&a, &b);
    printf("After swapping values in main a = %d, b = %d\n", a, b); 
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping values in function a = %d, b = %d\n", *a, *b); 
}
