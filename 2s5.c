#include<stdio.h>
int main(){
    int n,rem,num[5],count=0;
    printf("Enter number :");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        for(int i=0; i<5; i++){
            num[i]=rem;
            if(num[i]==5 && num[i+1]==5){
                count++;
            }
        }
        n/=10;
    }
    if(count==0){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}