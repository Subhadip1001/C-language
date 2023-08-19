                                                                // ASSIMENT OF C //


#include<stdio.h>
#include<math.h>

// 1.
// int main(){
//     int val,power,ans=1;
//     printf("Enter Number :");
//     scanf("%d",&val);
//     printf("Enter power valu :");
//     scanf("%d",&power);
//     // printf("ans is : %d",ans=pow(val,power));
//     int i=1;
//     while(i<=power){
//         ans*=val;
//         i++;
//     }
//     printf("ans is : %d",ans);
//     return 0;
// }

// 2.
// int main(){
//     int num,fact=1;
//     printf("Enter Number :");
//     scanf("%d",&num);
//     for(int i=1; i<=num; i++){
//         fact*=i;
//     }
//     printf("Factorial is : %d",fact);
//     return 0;
// }

// 3.
// int main(){
//     int num,ans=0;
//     printf("Enter Number :");
//     scanf("%d",&num);
//     for(int i=1; i<=num; i++){
//         ans+=i;
//     }
//     printf("Ans is : %d",ans);
//     return 0;
// }

// 4.
// int main(){
//     int t,fact=1;
//     printf("Enter Number for table :");
//     scanf("%d",&t);
//     for(int i=1; i<=10; i++){
//         fact=t*i;
//         printf("%d X %d = %d\n",t,i,fact);
//     }
//     return 0;
// }

// 5.
// int main(){
//     int n,max=0,number;
//     printf("Enter Range :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         printf("Enter number :");
//         scanf("%d",&number);
//         if(max<number){
//             max=number;
//         }
//     }
//     printf("Max is : %d",max);
//     return 0;
// }

// 6.
// int main(){
//     int num,rem,fact,sum=0,n;
//     printf("Enter Number :");
//     scanf("%d",&num);
//     n=num;
//     while (n!=0){
//         rem=n%10;
//         fact=1;
//         for(int i=1; i<=rem; i++){
//             fact*=i;
//         }
//         n/=10;
//         sum+=fact;
//     }
//     if(sum==num){
//         printf("%d is a Krisnamurti Number",sum);
//     }else{
//         printf("%d is not a Krisnamurti Number",num);
//     }
//     return 0;   
// }

// 7.
// int main(){
//     int n;
//     printf("Enter number :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             if(i%2!=0){
//                 printf("%d ",i);
//             }
//         }
//     }
//     return 0;
// }

// 8.
// int main(){
//     int n,rem,sum=0;
//     printf("Enter Number :");
//     scanf("%d",&n);
//     while(n!=0){
//         rem=n%10;
//         if(rem%2==0){
//             sum+=rem;
//         }
//         n/=10;
//     }
//     printf("Sum is = %d",sum);
//     return 0;
// }

// 10.
// int main(){
//     int x,y,z,temp,mul,count=0;
//     printf("Enter 1st Number :");
//     scanf("%d",&x);
//     printf("Enter 2nd number :");
//     scanf("%d",&y);
//     temp=y;

//     int i=1;
//     while(temp>0){
//         temp/=10;
//         count++;
//     }
//     for(int i=i; i<=count; i++){
//         mul=10;
//         x*=mul;
//     }

//     z=x+y;
//     printf("This number is : %d",z);
//     return 0;
// }

// 11.
// int main(){
//     int n,rem,number[20],c=0;
//     printf("Enter number :");
//     scanf("%d",&n);
//     while(n>0){
//         rem=n%10;
//         for(int i=0; i<20; i++){
//             number[i]=rem;
//             if(number[i]==5 && number[i+1]==5){
//                 c++;
//             }
//         }
//         n/=10;
//     }
//     if(c==0){
//         printf("no");
//     }else{
//         printf("yes");
//     }
//     return 0;
// }

// 12.
// int main(){
//     int n,fact=1;
//     printf("Enter number :");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     printf("factorial is : %d",fact);
//     return 0;
// }

// 13.
int main(){
    int num,temp,fact,sum=0,rem;
    printf("Enter number for cheak number is amstrong or not :");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        fact=1;
        rem=temp%10;
        fact=(rem*rem*rem);
        sum+=fact;
        temp/=10;
    }
    if(num==sum){
        printf("%d is a amstrong number",num);
    }else{
        printf("%d is not a amstrong numbre",num);
    }
    return 0;
}