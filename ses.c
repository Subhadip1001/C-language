#include<stdio.h>
int *create_array(int c[]);

int main(){
    int a[]={0,1,2,3,4};
    int *d;
    d=create_array(a);
    for(int i=0; i<5; i++){
        printf("%d",a[i]);
        printf("%d",d[i]);
    }
    return 0;
}
int *create_array(int c[]){
    int b[5];
    for(int i=0; i<5; i++){
        b[i]=c[i]+5;
    }
    return b;
}