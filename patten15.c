#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter number :");
    scanf("%d",&n);
    while(count != 2){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
        count++;
    }

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n/2; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}