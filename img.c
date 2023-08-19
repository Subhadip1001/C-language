#include<stdio.h> 
    struct complex{ 
    int real,imag; 
    }; 
    int main(){ 
    struct complex C1,C2; 
    printf("Enter the real and imag value of C1: "); 
    scanf("%d%d",&C1.real,&C1.imag); 
    printf("Enter the real and imag value of C2: "); 
    scanf("%d%d",&C2.real,&C2.imag); 
    
    int addreal=C1.real+C2.real; 
    int addimag=C1.imag+C2.imag; 
    int subreal=C1.real-C2.real; 
    int subimag=C1.imag-C2.imag; 
    int mulreal = C1.real*C2.real - C1.imag*C2.imag; 
    int mulimag = C1.imag*C2.real + C1.real*C2.imag; 

    printf("The result after addition is (%d)+(%di)\n",addreal,addimag); 
    printf("The result after substraction is (%d)+(%di)\n",subreal,subimag); 
    printf("The result after multiplication is (%d)+(%di)",mulreal,mulimag); 
    return 0; 
} 