#include<stdio.h>

int main(){
    int n,rem;
    printf("Enter Number :");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        n/=10;
    }
}