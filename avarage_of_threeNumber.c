#include<stdio.h>

int main(){
	float first,second,third;
	printf("Enter fist number : ");
	scanf("%f",&first);
	printf("Enter second number : ");
	scanf("%f",&second);
	printf("Enter third number : ");
	scanf("%f",&third);
	
	printf("Avarage of %0.2f , %0.2f and %0.2f is : %0.3f",first,second,third,(first+second+third)/3);
	
}
