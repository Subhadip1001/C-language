#include<stdio.h>
int main(){
    int n[5],ren[20];
    printf("Enter number :");
    for(int i=0; i<5; i++){
        scanf("%d",&n[i]);
    }
    for(int i=0; i<5; i=i+2){
        ren[i]=n[i];
        printf("%d ",ren[i]);
    }
    return 0;
}