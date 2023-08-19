#include<stdio.h>
int main(){
    // int age=19;
    // int *ptr=&age;
    // int _age=*ptr;
    // printf("%d\n",_age);
    // printf("%p\n",&age);
    // printf("%u\n",&age);
    // printf("%u\n",ptr);

    int i=02;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr);
    printf("%p\n",&pptr);
    return 0;
}