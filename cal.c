#include<stdio.h>
int main(){
    char ch;
    int a,b;

    printf("enter (+,-,*,/) :");
    scanf("%c",&ch);

    printf("Enter two nuber :");
    scanf("%d%d",&a,&b);

    if(ch=='+'){
        printf("%d",a+b);
    }else if(ch=='*'){
        printf("%d",a*b);
    }else if(ch=='-'){
        if(a>b){
            printf("%d",a-b);
        }else{
            printf("%d",b-a);
        }
    }else if(ch=='/'){
        if(a>b){
            printf("%f",(float)a/b);
        }else{
            printf("%f",(float)b/a);
        }
    }else{
        printf("INVAILD INPUT");
    }
    
    return 0;

}
