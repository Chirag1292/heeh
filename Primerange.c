#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, num;
    scanf("%d", &num);
    for (j = 2; j <= num; j++)
    {
        int is_prime = 1;
        for (i = 2; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d is a prime number\n", j);
        }
    }
    return 0;
}
