#include<stdio.h>

int main(){
    int d,temp,c=0;
    long int a;

    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;

    while(temp>0){
        d=temp%10;
        if(d%2==1){
            printf("%d ",d);
        }
        temp=temp/10;
    }
    return 0;
}