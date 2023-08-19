#include<stdio.h>
int main(){
    int n;
    printf("Enter anything :");
    scanf("%d",&n);
    
    if(n>=65 && n<=90){
        printf("UPPER CASE :)");
    }else if(n>=97 && n<=122){
        printf("lower case");
    }else if(n>=48 && n<=57){
        printf("Numbers :)");
    }else if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n>=96 || n<=123 && n<=127){
        printf("Special Charecter :)");
    }else{
        printf("INVALID INPUT ????");
    }

    return 0;
}