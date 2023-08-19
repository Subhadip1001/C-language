#include<stdio.h> 
#include<string.h> 
    int main(){ 
    char string1[30],string2[30]; 
    printf("Enter the first string: "); 
    fgets(string1,29,stdin); 
    printf("Enter the second string: "); 
    fgets(string2,29,stdin); 
    if(strcmp(string1,string2)==0){ 
        printf("Same"); 
    }else{ 
        printf("Not same"); 
    } 
    return 0; 
} 
