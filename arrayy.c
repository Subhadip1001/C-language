#include<stdio.h>
int main(){
    float price[3];
    printf("Enter prices :");
    for(int i=0; i<3; i++){
        scanf("%f",price[i]);
    }
    for(int i=0; i<3; i++){
        printf("Final price is : %f\n",price[i]+(0.18*price[i]));
    }
    return 0;
}