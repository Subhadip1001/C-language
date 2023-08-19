#include<stdio.h>
int main(){
    int n,rem,c=0; 
    printf("Enter number : ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        switch(rem){
            case 1: c++;
                    printf("1 is present in this number %d time",c);
        }
    }
    return 0;
}