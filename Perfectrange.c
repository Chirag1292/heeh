#include <stdio.h>

int isPerfect(int num) {
    int sum_of_divisors = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    return (sum_of_divisors == num);
}

int main() {
    int start, end;

    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
