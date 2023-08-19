#include<stdio.h> 
#include<string.h> 
    int main(){ 
    char str[30]; 
    int l=0; 
    printf("Enter the string: "); 
    scanf("%s",&str); 
    int h=strlen(str)-1; 
    while(h>1){ 
        if(str[l++]!=str[h--]){ 
            printf("Not a Palindrome"); 
            return 0; 
        } 
    } 
    printf("Palindrome"); 
    return 0; 
} 
