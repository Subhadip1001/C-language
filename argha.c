#include <stdio.h>
int main()
{
    int date, month, year, res;
    printf("Hello user enter your date of barth (DD MM YYYY) :");
    scanf("%d %d %d", &date, &month, &year);
    int n;
    printf("whta time for invest :");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("LESS THEN 2 YEAR NOT ACCEPTABLE!");
    }
    float money;
    printf("Please enter amount which you invest :");
    scanf("%f", &money);
    printf("Ok! Let me calculate\n");
    int age = 2023 - year;
    float inta, sum = 0, rate;
    if (age < 10)
    {
        rate = 7.0;
        inta = (money * rate * n) / 100;
        sum = money + inta;
        printf("Total amount in a year : %f\n", sum);
    }
    else if (age >= 10 && age < 50)
    {
        rate = 6.5;
        inta = (money * rate * n) / 100;
        sum = money + inta;
        printf("Total amount in a year : %f\n", sum);
    }
    else if (age >= 50 && age < 60)
    {
        rate = 6.8;
        inta = (money * rate * n) / 100;
        sum = money + inta;
        printf("Total amount in a year : %f\n", sum);
    }
    else if (age > 60)
    {
        rate = 7;
        inta = (money * rate * n) / 100;
        sum = money + inta;
        printf("Total amount in a year : %f\n", sum);
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}