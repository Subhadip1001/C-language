#include<stdio.h>
int main(){
    int n,rem[10],rev;
    printf("Enter Decimal number :");
    scanf("%d",&n);

    while(n!=0){
        rem[]=n%2;
        n/=2;
        
    }
    while(rem!=2){
    ren1=n%10;
        rev=rev*10+ren1;
        n/=10;
        printf("%d",rem);
    }
    return 0;
}