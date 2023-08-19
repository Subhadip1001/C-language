#include<stdio.h>
void count_odd(int arr[]);
int main(){
    int a[]={0,1,2,3,4};
    count_odd(a);
    for(int i=0; i<=4; i++){
        printf("%d",a[i]);
    }
}

void count_odd(int arr[]){
    for(int i=0; i<=4; i++){
        if(arr[i]%2!=0){
            arr[i]=0;
        }
    }
}