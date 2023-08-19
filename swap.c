#include<stdio.h>

void swap(int x, int y);
int _swap(int *x, int *y);

int main(){
    int a=3,b=5;
    swap(a,b);
    _swap(&a,&b);
    printf("x=%d & y=%d",a,b);
    return 0;
}
// call by valu....
void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("a = %d & b = %d\n",x,y);
}
// call by refrence....
int _swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}