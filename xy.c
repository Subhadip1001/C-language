#include<stdio.h>
int main()
{
   int x,y,a,z,mul,n=0;
   printf("Enter first number :");
   scanf("%d",&x);
   printf("Enter second number :");
   scanf("%d",&y);
    a=y;
int i=1;
while(a>0){
    a/=10;
    n+=1;
}
for(int i=1; i<=n; i++){
    mul=10;
    x=x*mul;
}
z=x+y;
printf("Ans is : %d",z);
   return 0;
}