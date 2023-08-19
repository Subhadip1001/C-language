#include<stdio.h>
int main(){
    int n;
    printf("Enter number (0-127) :");
    scanf("%d",&n);

    if(n>=65 && n<=90){
        printf("%d ASCII valu charecter :%c",n,(char)n);
    }else if(n>=97 && n<=122){
        printf("%d ASCII valu charecter :%c",n,(char)n);
    }else if(n>=48 && n<=57){
        printf("%d ASCII valu charecter :%c",n,(char)n);
    }else if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127){
        printf("%d ASCII valu charecter :%c",n,(char)n);
    }else{
        printf("%d is not a vaild input !\n",n);
        printf("Please enter a valid input :)");
    }
}