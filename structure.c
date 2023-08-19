#include<stdio.h>
struct studentID{
    char name[100];
    int roll;
    float marks;
};

int main(){
    struct studentID p[100];
    for(int i=0;i<=2; i++){
    printf("Enter first sudent name :");
    scanf("%s",&p[i].name);
    printf("Enter first sudent rool :");
    scanf("%d",&p[i].roll);
    printf("Enter first sudent markesper :");
    scanf("%f",&p[i].marks);
    }
    for(int i=0; i<=2; i++){
    printf("All details about first student : %s %d %f\n",p[i].name,p[i].roll,p[i].marks);
    }
    return 0;
}
