#include<stdio.h>
int main(){
    int arr[20];
    printf("Enter numbers :");
    for(int i=1; i<=20; i++){
    scanf("%d",&arr[i]);
    if(arr[i] % 2 != 0){
        printf("%d ",arr[i]);
    }
    }
    return 0;
}