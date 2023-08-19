#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter number :");
    scanf("%d",&n);
    while (count !=2)
    {
        for(int i=1; i<=n; i++){
            for(int j=i; j<=(n-1); j++){
                printf(" ");
            }
                for(int k=1; k<=i; k++){
                    printf("* ");
                }
                printf("\n");
        }
        count++;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf(" ");
            for(int k=1; k<=(n/2); k++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}