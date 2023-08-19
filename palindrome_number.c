#include<stdio.h>
int main(){
    int n,reminder,reverse=0;
    printf("Enter number for cheak palindrome or not :");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        reminder=temp%10;
        reverse=reverse*10+reminder;
        temp/=10;
    }
    if(n==reverse){
        printf("%d is a palindrome number",n);
    }else{
        printf("%d is not a palindrome number !",n);
    }
    return 0;
}