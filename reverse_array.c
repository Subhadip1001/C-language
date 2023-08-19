#include<stdio.h>
int main(){
    int arr[5],i;
    int first_valu,second_valu;
    printf("Enter 5 number :");
    for(i=0; i<=4; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<=arr[i]/2; i++){
        first_valu=arr[i];
        second_valu=arr[5-i-1];
        arr[i]=second_valu;
        arr[5-i-1]=first_valu;
    }
    for(i=0; i<=4; i++){
        printf("%d\t",arr[i]);
    }
}