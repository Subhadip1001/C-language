#include<stdio.h>
int main(){
    char alp;
    printf("Enter Charecter :");
    scanf("%c",&alp);
    
    if(alp>=66 && alp<=90){
        printf("%c",alp+32);
    }else if(alp>=97 && alp<=120){
        printf("%c",alp-32);
    }else{
        printf("INVALID INPUT");
    }
    
    return 0;
}