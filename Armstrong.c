#include <stdio.h>
int main()
{
    int i, num, dig, cube;
    int cubsum = 0;
    int sumdig = 0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    int og_num;
    og_num = num;
    while (num != 0)
    {
        dig = num % 10;
        sumdig = sumdig + dig;
        cube = dig * dig * dig;
        cubsum = cubsum + cube;
        num = num / 10;
    }
    if (og_num == cubsum)
    {
        printf("%d is an armstrong number", og_num);
    }
    else
    {
        printf("%d is not an armstrong number", og_num);
    }

    return 0;
}
