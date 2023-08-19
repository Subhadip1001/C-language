#include<stdio.h>
// 1.
// void swap(int *x,int *y);

// int main(){
//     int a,b;
//     printf("Enter a&b :");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("a=%d & b=%d",a,b);

//     return 0;
// }
// void swap(int *x,int *y){
//     int t=*x;
//     *x=*y;
//     *y=t;
// }


// 2.
// void dowork(int a,int b,int *sum,int *pro,int *avg);

// int main(){
//     int a,b,sum,pro,avg;
//     printf("Enter Numbers :");
//     scanf("%d%d",&a,&b);
//     dowork(a,b,&sum,&pro,&avg);
//     printf("sum = %d\npro = %d\navg = %d",sum,pro,avg);
//     return 0;
// }

// void dowork(int a,int b,int *sum,int *pro,int *avg){
//     *sum=a+b;
//     *pro=a*b;
//     *avg=(a+b)/2;
// }


// 3.
// int main(){
//     int a,b;
//     printf("Enter two number :");
//     scanf("%d%d",&a,&b);
//     int *ptr1=&a;
//     int *ptr2=&b;

//     if(*ptr1>*ptr2){
//         printf("MAX is = %d",*ptr1);
//     }else{
//         printf("MAX is = %d",*ptr2);
//     }
//     return 0;
// }


// 4.
// void max(int a,int b,int *max);
// void min(int x,int y,int *min);
// int main(){
//     int m,n,ma,mi;
//     printf("Enter two number :");
//     scanf("%d%d",&m,&n);
//     max(m,n,&ma);
//     min(m,n,&mi);
//     printf("MAX is = %d\nMIN is = %d\n",ma,mi);
//     return 0;
// }
// void max(int a,int b,int *max){
//     if(a>b){
//         *max=a;
//     }else{
//         *max=b;
//     }
// }
// void min(int x,int y,int *min){
//     if(x<y){
//         *min=x;
//     }else{
//         *min=y;
//     }
// }



int main(){
    char ch;

    printf("For big alp 'A' & small alp 'a' :");
    scanf("%c",&ch);

    switch(ch){
        case 'A' : for(char i=65; i<=90; i++){
            printf("%c ",i);
        }
        break;
        case 'a' : for(char i=97; i<=122; i++){
            printf("%c ",i);
        }
        break;
        default : printf("THANK YOU");
    }

    return 0;
}