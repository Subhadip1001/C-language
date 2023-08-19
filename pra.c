#include<stdio.h>
int main(){
    int a,rem,fact,sum=0;
    printf("Enter cnumbers :");
    scanf("%d",&a);
    fact=a;
    
    while(fact!=0){
        rem=fact%10;
        sum+=(rem*rem*rem);
        //sum+=fact;
        fact/=10;
    }
    if(sum==a){
        printf("%d is a amstrong number \n",a);
    }else{
        printf("%d is not a amstrong number \n",a);
    }
    return 0;
}