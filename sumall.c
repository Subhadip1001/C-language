#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter Number :");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of all numbers :%d",sum);
    return 0;
}