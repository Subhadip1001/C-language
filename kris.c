#include<stdio.h>

int main(){
    int n,rem,fact,sum=0,temp;
    printf("Enter NUmber :");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        fact=1;
        rem=temp%10;
    for(int i=1; i<=rem; i++){
        fact*=i;
    }
    temp/=10;
    sum+=fact;
    }
    if(sum==n){
        printf("%d is a Krishnamurthy number \n",sum);
    }else{
        printf("%d is not a Krishnamurthy number \n",n);
    }

    return 0;

}
