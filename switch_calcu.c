#include<stdio.h>

float a,b,res;
char ch;

int sum();
int sub();
int mul();
int div();
void diplay();
void sw_case();

int main(){
    printf("Enter (+,-,*,/) :");
    scanf("%c",&ch);
    printf("Enter first number :");
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);

    sw_case(ch);
    return 0;
}

int sum(){
    res=a+b;
    return res;
}

int sub(){
    if(a>b){
        res=a-b;
    }else{
        res=b-a;
    }
    return res;
}

int mul(){
    res=a*b;
    return res;
}

int div(){
    if(a>b){
        res=a/b;
    }else{
        res=b/a;
    }
    return res;
}

void display(){
    printf("%d",res);
}

void sw_case(){
    int result;
    switch(ch){
        case '+': result=sum();
                  display(result);
                  break;
        case '-': result=sub();
                  display(result);
                  break;
        case '*': result=mul();
                  display(result);
                  break;
        case '/': result=div();
                  display(result);
                  break;
        default: printf("INVALID INPUT");
                                    
    }
}