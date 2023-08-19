#include<stdio.h>
int main(){
    int arr[5],temp,i;
    printf("Enter numbers :");
    for(i=0; i<=4; i++){
        scanf("%d",&arr[i]);
    }
    
	temp=arr[5-1]; // Right shift....
	for(i=5-1; i>0; i--){
	    arr[i]=arr[i-1];
	}
	arr[0]=temp;
	printf("right Shift is : ");
	for(i=0; i<=4; i++){
	    printf("%d\t",arr[i]);
	}
	
	printf("\n");
	    
//	temp =arr[0]; // Left shift....
//	for(i=0; i<5; i++){
//	    arr[i]=arr[i+1];
//	}
//	arr[5-1]=temp;
//	printf("Left Shift is : ");
//	for(i=0; i<=4; i++){
//	    printf("%d\t",arr[i]);
//	}

    return 0;
}
