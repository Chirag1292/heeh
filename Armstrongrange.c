#include <stdio.h>

int main()
{
    int i, num, digit, cube;
    printf("Enter a number up to which you want to check Armstrong numbers:\n");
    scanf("%d", &i);

    printf("Armstrong numbers from 1 to %d are:\n", i);

    for (num = 1; num <= i; num++)
    {
        int og_num = num;
        int cubsum = 0;

        int numDigits = 0;
        int temp = num;

        while (temp != 0)
        {
            numDigits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0)
        {
            digit = temp % 10;
            int digitCube = 1;

            for (int j = 0; j < numDigits; j++)
            {
                digitCube *= digit;
            }

            cubsum += digitCube;
            temp /= 10;
        }

        if (og_num == cubsum)
        {
            printf("%d\n", og_num);
        }
    }

    return 0;
}
