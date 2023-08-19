#include<stdio.h>

int main(){
    int total,bs;
    float hra,da;
    printf("Enter the basic salary: ");
    scanf("%d",&bs);
    da=0.74*bs;
    hra=0.15*bs;
    total=bs+hra+da;
    printf("His total salary is %d",total);
    return 0;
}