#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("Enter Number :");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    printf("sum is :%d",sum);
    return 0;
}