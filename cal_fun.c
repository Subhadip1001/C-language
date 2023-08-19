#include<stdio.h>

int sum(int a,int b);
int mul(int m,int n);
int div(int p,int q);
int sub(int i,int j);
int print(char ch,int x,int y);

int main(){
    char ch;
    printf("Enter (+,-,*,/) :");
    scanf("%c",&ch);

    int x,y;
    printf("Enter first number :");
    scanf("%d",&x);
    printf("Enter second number :");
    scanf("%d",&y);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int mul(int m,int n){
    return m*n;
}
int div(int p,int q){
    if(p>q){
        return p/q;
    }else{
        return q/p;
    }
}
int sub(int i,int j){
    if(i>j){
        return i-j;
    }else{
        return j-i;
    }
}
int print(char ch,int x,int y){
    if(ch=='+'){
        printf("Sum is : %d",sum(a,b))
    }
}
