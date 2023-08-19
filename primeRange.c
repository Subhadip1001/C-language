#include<stdio.h>
int main(){
    int low,high;
    scanf("%d%d",&low,&high);
    for(int i=low; i<=high; i++){
        for(int j=2; j<low; i++){
            if(i%j!=0){
                printf("%d",i);
            }
        }
        // printf("%d ",i);
    }
    return 0;
}