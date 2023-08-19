#include<stdio.h>
// #define array_size 10

void src(int arr[], int size, int num);

int main(){
    int n,i;
    int a[10];

    printf("Enter Number for storing data in array :");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number for cheaking :");
    scanf("%d",&n);

    src(a,10,n);

    return 0;
}

void src(int arr[], int size, int num){
    int flage=0,i;
    for(i=0; i<=9; i++){
        if(num==arr[i]){
            printf("%d is present in %d position\n",num,i);
            flage++;
        }
    }

    if(flage==0){
        printf("%d is not present\n",num);
    }
}
