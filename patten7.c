#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter Number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}