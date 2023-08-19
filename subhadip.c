#include<stdio.h>
int main(){
	int n[5],rem=0,rev=0;
	printf("enter nuber :");
	scanf("%d",&n[0]);
	
	while(n[0]>0){
			rem= n[0]%10;
			rev= (rev*10)+rem;
			n[0]/=10;
	}
	
	printf("%d",rev);
	return 0;
}
