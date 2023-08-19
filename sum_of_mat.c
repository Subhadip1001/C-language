#include<stdio.h>

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={20,21,22,23,24,25,26,27,28};
    int sum[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}