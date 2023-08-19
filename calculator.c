#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numnber :");
    scanf("%d%d",&a,&b);

    char sy;
    printf("Enter (+,-,*,/) :");
    scanf("%c",&sy);

    switch(sy){
        case '+':printf("sum is :%d",a+b);
        break;
        case '-':if(a>b){
            printf("sub is :%d",a-b);
        }else{
            printf("sub is :%d",b-a);
        }
        break;
        case '*':printf("mul is :%d",a*b);
        break;
        case '/':if(a>b){
            printf("div is :%f",a/b);
        }else{
            printf("div is :%f",b/a);
        }
    }

    return 0;
}