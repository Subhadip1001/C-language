#include<stdio.h>
int main(){
    int n,final;
    int fib_one=0, fib_tow=1;
    final=fib_one+fib_tow;

    printf("Enter Number :");
    scanf("%d",&n);

    printf("fib numbers are :%d,%d,",fib_one,fib_tow);

    for(int i=3; i<=n; i++){
        printf("%d,",final);
        fib_one=fib_tow;
        fib_tow=final;
        final=fib_one+fib_tow;
    }
    return 0;
}