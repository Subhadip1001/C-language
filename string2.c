#include<stdio.h>
int main(){
    char string[100];
    printf("Enter your full name :");
    fgets(string,100,stdin);
    puts(string);
    return 0;
}