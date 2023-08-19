#include<stdio.h>
int main(){
    char n;
    printf("Enter charecter :");
    scanf("%c",&n);

    if(n>=65 && n<=90){
        printf("ASCII valu of '%c' is :%d",n,(int)n);
    }else if(n>=97 && n<=122){
        printf("ASCII valu of '%c' is :%d",n,(int)n);
    }else if(n>=48 && n<=57){
        printf("ASCII valu of '%c' is :%d",(int)n);
    }else if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127){
        printf("ASCII valu of '%c' is :%d",n,(int)n);
    }else{
        printf("%c is not a vaild input !\n",n);
        printf("Please enter a valid input :)");
    }
}