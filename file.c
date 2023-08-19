#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt","w");

    fprintf(fptr, "%c", "a");
    fprintf(fptr, "%c", "p");
    fprintf(fptr, "%c", "p");
    fprintf(fptr, "%c", "l");
    fprintf(fptr, "%c", "e");

    char ch;
    int n;

    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);
    // fscanf(fptr, "%c" ,&ch);
    // printf("%c",ch);

    // printf("\n");

    // fscanf(fptr, "%d" ,&n);
    // printf("%d ",n);
    // fscanf(fptr, "%d" ,&n);
    // printf("%d ",n);
    // fscanf(fptr, "%d" ,&n);
    // printf("%d ",n);

    fclose(fptr);
    return 0;
}