#include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3]={0};
    int i,j,k,m,n,p,q;

    printf("Enter number for first matrix mxn :");
    scanf("%d%d",&m,&n);
    printf("Enter number for second matrix pxq :");
    scanf("%d%d",&p,&q);

    if(n!=p){
        printf("THIS MATRIX IS NOT POSSIBLE :)");
    }else{
        printf("Enter variable for first matrix :");
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                scanf("%d",a[i][j]);
            }
        }

        printf("Enter variable for second matrix :");
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                scanf("%d",b[i][j]);
            }
        }

        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                for(k=0; k<p; k++){
                    c[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }

        printf("Multiplication is :\n");
        for(i=0; i<m; i++){
            for(j=0; j<q; j++){
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}