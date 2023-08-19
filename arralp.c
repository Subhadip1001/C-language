#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000];
    int c=0;
    printf("Enter string :");
    fgets(arr,1000,stdin);
    int length = strlen(arr);
    int i=length-1;
    while (i>=0){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            c++;
            printf("%c,",arr[i]);
        }
        i--;
    }
    printf("\n");
    printf("no of vowel : %d",c);
    return 0;
}
