#include<stdio.h>

int main(){
    float x,power=1;
    int y,i=1;

    printf("Enter two numbers: ");
    scanf("%f%d",&x,&y);

    while(i<=y){
        power=power*x;
        i++;
    }
    printf("%f to the power %d is %f\n",x,y,power);
    return 0;
}