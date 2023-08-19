#include <stdio.h>
int main()
{
    int year;
    printf("Enter year :");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
        else
        {
            printf("%d is not a leap year", year);
        }
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}

// int main(){
//     int n;
//     scanf("%d",&n);
//     if((n%4==0 && n%100!=0) || n%400==0){
//         printf("leap");
//     }else{
//         printf("not");
//     }
//     return 0;
// }