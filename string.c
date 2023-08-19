// first time string.....
#include<stdio.h>
void printString(char ch[]);

int main(){
    char firstName[]={"SUBHADIP"};
    char lastName[]={"MANDAL"};

    printString(firstName);
    printString(lastName);
    return 0;

}

void printString(char ch[]){
    for(char i=0; ch[i] !='\0'; i++){
        printf("%c ",ch[i]);
    }
     printf("\n");
}