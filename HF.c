#include<stdio.h>
void print_Hello();
void print_Bonjure();

int main(){
    int ch;
    printf("Enter 'i' for indian & 'f' for french :");
    scanf("%c",&ch);
    if(ch =='i'){
        print_Hello;
    }else if(ch == 'f'){
        print_Bonjure;
    }else{
        printf("INVAILD INPUT !");
    }
}

void print_Hello(){
    printf("NAMASTE");
}

void print_Bonjure(){
    printf("BONJURE");
}