#include<stdio.h>
int main(){
    int n,i;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers in the array:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
       
    printf("Array before Shift:");
    for(i=0;i<n;i++)
        printf("%d,",arr[i]);

    int num=arr[0];
    for(i=0;i<n;i++)
        arr[i]=arr[i+1];
    arr[i-1]=num;

    printf("\nArray after Shift:");
    for(i=0;i<n;i++)
        printf("%d,",arr[i]);

    return 0;

}