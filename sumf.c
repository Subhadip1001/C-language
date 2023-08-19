#include<stdio.h>
int calculateSum();

int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    int n=calculateSum(a,b);
    printf("sum is : %d",n);
    return 0;
}

int calculateSum(int a,int b){
    int sum=a+b;
    return sum;
}
