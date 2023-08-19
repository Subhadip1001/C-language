#include<stdio.h>
int main(){
    float n,fact=1;
    printf("Enter Number :");
    scanf("%f",&n);

    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("%f factorial is :%f",n,fact);
    return 0;

}