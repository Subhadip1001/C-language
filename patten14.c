#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=n; i>=1; i--){
        for(int j=n-i; j>=1; j--){
            printf(" ");
        }
        for(int k=i; k>=1; k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}