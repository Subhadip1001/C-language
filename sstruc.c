#include<stdio.h>
struct student{
    char name[10];
    int roll;
    float cgpa;
};

int main(){
    struct student s[2];
    printf("Enter students name :\n");
    for(int i=0; i<2; i++){
        scanf("%c",s[i].name);
        scanf("%d",s[i].roll);
        scanf("%f",s[i].cgpa);
    }
    // printf("Enter Stdents roll :\n");
    // for(int j=0; j<2; j++){
    //     scanf("%d",s[j].roll);
    // }
    // printf("Enter Stdents CGPA :\n");
    // for(int k=0; k<2; k++){
    //     scanf("%f",s[k].cgpa);
    // }

    for(int i=0; i<2; i++){
        printf("%c\n",s[i].name);
        printf("%d\n",s[i].name);
        printf("%f\n",s[i].name);
    }
    return 0;
}
