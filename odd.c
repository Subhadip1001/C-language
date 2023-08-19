#include<stdio.h>

int main(){
    int n,odd;

    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(n%i==0){
            if(i%2!=0){
                odd=i;
                printf("%d ",odd);
            }
        }
        i++;
    }
    return 0;
}