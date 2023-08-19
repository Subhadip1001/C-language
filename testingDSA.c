#include<stdio.h>
int linearSearch(int a[],int size, int key);

int main(){
    int n,key;
    int arr[n];
    printf("Enter array size :");
    scanf("%d",&n);
    printf("Enter element :");
    for(int i=0; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter kay :");
    scanf("%d",&key);

    int x = linearSearch(arr,n,key);
    if(x == -1){
        printf("%d is nor present in this array",key);
    }else{
        printf("%d is present in %d position",key,x);
    }
    return 0;
}

int linearSearch(int a[],int size,int key){
    for(int i=0; i<=size; i++){
        if(key == a[i]){
            return i;
        }else{
            return -1;
        }
    }
}