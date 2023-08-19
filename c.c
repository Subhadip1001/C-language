#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		if(i==1 || i==5)
		{
			for(k=1;k<=n;k++)
			{
				printf("*");
			}
		}
		else{
		for(k=n-i;k>=1;k--) {
		
		printf("*");
		for(j=1;j<=n-1;j++)
		{
			printf(" ");
		}
		printf("*");
		}
	}
		printf("\n");
	}
	return 0;
	
}
