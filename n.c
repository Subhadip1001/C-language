#include<stdio.h>
int main()
{
    int n,i,max=0;
    printf("enter n:");
    scanf("%d",&n);
    int num[10000];
    
    for(i=0;i<n;i++){
   printf("enter number:");
   scanf("%d",&num[i]);
   }

   for(i=0;i<n;i++){
    if(num[i]>max){
        max=num[i];
      }
   }
       printf("max is : %d",max);
       return 0;
}