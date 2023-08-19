#include<stdio.h>

void fact(int n);

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    fact(n);
    return 0;
}

void fact(int n){
    int f=1;
    for(int i=1; i=n; i++){
        f*=i;
    }
    printf("Factorial is :%d",f);
}
