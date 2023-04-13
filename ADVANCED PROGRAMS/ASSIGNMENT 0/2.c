// 2 WAP to find out the sum of the numbers stored in an array of integers.
#include<stdio.h>
int main(){
    int arr[100],n,sum;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the numbers :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sum of numbers\n");
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i]; 
    }
    printf("%d\n",sum);
    return 0;
    
    
}