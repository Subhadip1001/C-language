#include<stdio.h>
// using global variable calculater funtion

float a,b,res;

int sum();
int sub();
int mul();
int div();
void display();

int main(){
    printf("Enter 1st Number:");
    scanf("%f",&a);
    printf("Enter 2nd Number:");
    scanf("%f",&b);

    sum();
    display();
    sub();
    display();
    mul();
    display();
    div();
    display();

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
    printf("%f\n",res);
}