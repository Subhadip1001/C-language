#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    printf("Enter string :");
    fgets(arr,100,stdin);
    int length= strlen(arr);
    int i=length-1;
    while(i>=0){
        printf("%c",arr[i]);
        i--;
    }
    return 0;
}