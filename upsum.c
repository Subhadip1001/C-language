#include<stdio.h>

int main(){
    int n,x,sum=0,mul;
    printf("Enter Number :");
    scanf("%d",&x);
    printf("Enter power valu :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        mul=1;
        for(int j=1; j<=i; j++){
            mul*=x;
        }
        sum+=mul;
    }
    
    printf("sum is : %d",sum);
    return 0;
}
