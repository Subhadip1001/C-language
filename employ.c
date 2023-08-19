#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int size=2*n-1;
    int start=0;
    int end=size-1;
    
    int a[size][size];

    while(n!=0){
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-1; j++){
                if(i==0 || i==size-1 || j==0 || j==size-1){
                    a[i][j]=n;
                }
            }
        }
        start++;
        --end;
        --n;
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}