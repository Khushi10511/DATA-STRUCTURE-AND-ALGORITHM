// 1 WAP to create an array that can store max. 50 integers and display the
// contents of the array

#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the integers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The integers are\n");
    for(int i = 0  ; i<n ; i++){
    printf(" %d\n",arr[i]);
    }   
    return 0;
    
}