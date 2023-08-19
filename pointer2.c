#include<stdio.h>

int doWork(int a,int b,int *sum,int *pro,float *avg);

int main(){
    int x,y;
    int sum,pro;
    float avg;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);

    doWork(x,y,&sum,&pro,&avg);
    printf("sum = %d & product = %d & avarage = %f",sum,pro,avg);
    return 0;
}

int doWork(int a,int b,int *sum,int *pro,float *avg){
    *sum = a+b;
    *pro = a*b;
    *avg = (a+b)/2;
}
