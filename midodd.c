#include<stdio.h> 
int main(){ 
    int a,b,temp,d,count=0; 
    printf("Enter the number with odd number of digits: "); 
    scanf("%d",&a); 
    temp=a; 
    while(a>0){ 
        d=a%10; 
        a/=10; 
        count=count+1; 
    } 
    if(count%2==0){ 
        printf("Please enter a number with odd number of digits"); 
    }else{ 
        count=(count/2)+1; 
        for(int i=1;i<temp;i++){ 
            b=temp%10; 
            if(i==count){ 
                printf("%d ",b); 
            } 
            temp/=10; 
        } 
    } 
    return 0; 
}