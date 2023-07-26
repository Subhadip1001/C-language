#include<stdio.h>

int main(){
	int firstNumber,secondNumber,sum=0;
	printf("Enter first number :");
	scanf("%d",&firstNumber);
	printf("Enter second number :");
	scanf("%d",&secondNumber);
	
	sum = firstNumber + secondNumber;
	printf("sum is : %d",sum);
	return 0;
}
