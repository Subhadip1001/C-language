#include<stdio.h>
int main(){
    int m,n,flage=0,rem;
    scanf("%d",&n);
    for(int i=2; i=n-1; i++){
        if(n%i==0){
            flage++;
        }
    }
    if(flage==1){
        printf("no");
    }else{
        printf("yes");
    }
    return 0;
}