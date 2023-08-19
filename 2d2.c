#include<stdio.h> 
    int main(){ 
    int a[3][3], b[3][3] , d[3][3]={0}; 
    int i,j,k,m,n,p,q; 
    printf("Enter no. of m and n in matrix A: "); 
    scanf("%d%d",&m,&n); 
    printf("Enter no. of m and n in matrix B: "); 
    scanf("%d%d",&p,&q); 
    if(n!=p){ 
        printf("Matrix Multiplication is not possible"); 
        return 0; 
    }else{ 
        printf("Enter elements of matrix A: "); 
        for(i=0;i<m;i++){ 
            for(j=0;j<n;j++){ 
                scanf("%d", &a[i][j]); 
            } 
        }
        printf("Enter elements of matrix B: "); 
        for(i=0;i<p;i++){ 
            for(j=0;j<q;j++){ 
                scanf("%d", &b[i][j]); 
            } 
        } 
        for(i=0;i<m;i++){ 
            for(j=0;j<q;j++){ 
                for(k=0;k<p;k++){ 
                    d[i][j] += a[i][k]*b[k][j]; 
                } 
            } 
        } 
        printf("\nResult of Matirx Multiplication:\n"); 
        for(i=0;i<m;i++){ 
            for(j=0;j<q;j++){ 
                printf("%d ", d[i][j]); 
            } 
            printf("\n"); 
        } 
    } 
    return 0; 
}