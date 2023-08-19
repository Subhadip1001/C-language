#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter Number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        if(i==1 || i==n){
            for(k=1; k<=n; k++){
                printf("*");
            }
        }else{
            for(k=1; k<=n-i; k++){
                printf("*");
            }
            for(j=1; j<=n-2; j++){
                printf(" ");
            }
           printf("*");
        }

        printf("\n");
    }

return 0;
    
}
