#include<stdio.h>
int main(){
    printf("IN UPER CASE : ");

    for(char ch=65; ch<=90; ch++){
        printf("%c ",ch);
    }
    printf("\n");

    printf("IN SMALL CASE : ");
    for(char ch=97; ch<=122; ch++){
        printf("%c ",ch);
    }
    printf("\n");
    return 0;
}