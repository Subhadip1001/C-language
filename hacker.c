#include<stdio.h>
int main(){
    int n,reminder,sum;
    n=10564;
    while(n!=0){
        reminder=n%10;
        sum+=reminder;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}