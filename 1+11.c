#include<stdio.h>
int main()
{
  int pre=0,sum=0,n,mul;
  printf("enter n:");
  scanf("%d",&n);
  if(n==1)
  {
    printf("series is 1");
  }
 
 else{
  printf("series is 1+");
  for(int i=0;i<(n-1);i++)
  {
    mul=1;
      for(int j=0;j<=i;j++)
      {
         mul=mul*10;
         sum=mul+1;
         mul=sum;
    
      }

      printf("%d+",sum);
      pre=pre+sum;
  }
  printf("\n");
  printf("sum of the series is %d",(pre+1));
 }
 return 0;
}
