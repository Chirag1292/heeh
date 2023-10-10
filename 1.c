#include <stdio.h>
int main()
{
    int i, sum = 0, count = 0;
    for (i = 1; i <= 300; i++)
    {
        if (i % 7 == 0 && i % 2 != 0)
        {
            sum = sum + i;
            count++;
        }
    }
    printf("The sum of odd number divisible by 7 is %d \n", sum);
    double average = (double)sum / (double)count;
    printf("The average of odd number divisible by 7 is %.5lf\n", average);
    return 0;
}
