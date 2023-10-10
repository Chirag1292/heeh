#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if (num%i==0)
        {
            printf("This is not a prime number");
            break;
        }
        else{
            printf("This is a prime number");
            break;
        }
        
        
    }
    return 0;
}
