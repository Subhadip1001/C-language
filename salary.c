#include<stdio.h>
int main(){
    float bs,da,har,grp;
    printf("Enter number :");
    scanf("%f",&bs);
    da=bs*0.4;
    har=bs*0.2;
    grp=da+har+bs;
    printf("bas sa :%f\n",bs);
    printf("da sa :%f\n",da);
    printf("har sa :%f\n",har);
    printf("da sa :%f\n",grp);

    return 0;
}