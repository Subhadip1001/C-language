#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[100];
    int enrolment;
    int registration;
} stu;

int main(){
    stu s[5];
    printf("Enter Five Students Name,Enrolment ID,Registation :");
    for(int i=0; i<=4; i++){
        scanf("%s%d%ld",&s[i].name,&s[i].enrolment,&s[i].registration);
    }

    // this is the long process ......
    printf("student name ,enrolment & registration is :%s , %d & %d\n",s[0].name,s[0].enrolment,s[0].registration);
    printf("student name ,enrolment & registration is :%s , %d & %d\n",s[1].name,s[1].enrolment,s[1].registration);
    printf("student name ,enrolment & registration is :%s , %d & %d\n",s[2].name,s[2].enrolment,s[2].registration);
    printf("student name ,enrolment & registration is :%s , %d & %d\n",s[3].name,s[3].enrolment,s[3].registration);
    printf("student name ,enrolment & registration is :%s , %d & %d\n",s[4].name,s[4].enrolment,s[4].registration);

    printf("\n");


    // this is the fastest proces to print the valu of a variable ....
    for(int i=0; i<=4; i++){
        printf("student name ,enrolment & registration is :%s , %d & %d \n",s[i].name,s[i].enrolment,s[i].registration);
    }

    return 0;
}