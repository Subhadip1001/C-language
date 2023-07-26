#include <stdio.h>

void calculate(int m, int n, char ch);

int main() {
    int m, n;
    char ch;
    printf("Starting number: ");
    scanf("%d", &m);
    printf("Ending number: ");
    scanf("%d", &n);

    printf("If you want to print the sum of %d to %d then you enter 's'.\n", m, n);
    printf("If you want to print the average of %d to %d then you enter 'a'.\n", m, n);
    printf("If you want to print both of these then you enter 'b'.\n", m, n);
    printf("Enter your choice: ");
    scanf(" %c", &ch);

    calculate(m, n, ch);

    return 0;
}

void calculate(int m, int n, char ch) {
    int i, count = 0, sum = 0;
    float avg;
    if (ch == 's' || ch == 'S') {
        for (i = m; i <= n; i++) {
            sum += i;
            count++;
        }
        printf("Sum of %d to %d is : %d", m, n, sum);
    } else if (ch == 'a' || ch == 'A') {
        for (i = m; i <= n; i++) {
            sum += i;
            count++;
        }
        avg = (float)sum / count;
        printf("Average of %d to %d is : %f", m, n, avg);
    } else if (ch == 'b' || ch == 'B') {
        for (i = m; i <= n; i++) {
            sum += i;
            count++;
        }
        avg = (float)sum / count;
        printf("Sum of %d to %d is : %d\n", m, n, sum);
        printf("Average of %d to %d is : %0.3f", m, n, avg);
    } else {
        printf("INVALID INPUT !");
    }
}
