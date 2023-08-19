#include<stdio.h>
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    if(num>0){
        printf("%d is a posetive number\n",num);
    }else{
        printf("%d is a negative number\n",num);
    }
    return 0;
}