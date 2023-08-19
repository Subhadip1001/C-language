#include<stdio.h>

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    if (n<=30){
        printf("a");
    }
    else if(n<=60){
        printf("b");
    }else{
        printf("ook");
    }
    return 0;
}