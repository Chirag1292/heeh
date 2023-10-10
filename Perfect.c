#include <stdio.h>

int main() {
    int num, sum_of_divisors;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    sum_of_divisors = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    
    if (sum_of_divisors == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}
