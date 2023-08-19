#include<stdio.h>
int main(){
    int array[10];
    int n,flage=0;
    printf("enter number for storing ina array :");
    for(int i=0; i<=9; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter number for cheaking the number :");
    scanf("%d",&n);

    for(int i=0; i<=9; i++){
        if(n==array[i]){
            printf("%d is prent in %d positin\n",n,i);
            flage++;
        }
    }

    if(flage==0){
        printf("%d is not present \n");
    }

    return 0;

}