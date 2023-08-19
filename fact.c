#include<stdio.h>

int facr(int n);

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("factorial is :%d",fact(n));
    return 0;
}

int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    return f;
}
