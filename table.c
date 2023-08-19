#include<stdio.h>

int main(){
    int n,tab=1;
    printf("Enter Number :");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        tab=n*i;
        printf("%d X %d = %d\n",n,i,tab);
    }
    return 0;
}