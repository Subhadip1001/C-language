#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
     if(num%3==0&&num%5==0&&num%7==0){
        printf("%d is divisible by 3 , 5 , 7",num);
    }
    else if(num%3==0||num%5==0||num%7==0){
        if(num%3==0&&num%5==0){
            printf("%d is divisible by both 3 and 5",num);
        }
        else if(num%3==0&&num%7==0){
            printf("%d is divisible by both 3 and 7",num);
        }
        else if (num%5==0&&num%7==0){
            printf("%d is divisible by both 5 and 7",num);
        }
        else if(num%3==0){
            printf("%d is divisible by 3",num);
        }
        else if(num%5==0){
            printf("%d is divisible by 5",num);
        }
        else{
            printf("%d is divisible by 7",num);
        }
    }
    else{
        printf("%d is not divisible by 3, 5, 7",num);
    }
    return 0;
}