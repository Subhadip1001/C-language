#include<stdio.h>
int main(){
    int a,b,c,d,e,avg;
    printf("enter number:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    avg=(a+b+c+d+e)/5;
    printf("average is:%d\n",avg);
    
    float per;
    per=(avg/60)*100;
    printf("Marks  persentage is:%f\n",per);
    
    if(per>=45){
        printf("PASS");
    }else{
        printf("FAIL");
    }
    return 0;
}
