#include <stdio.h>

int main()
{
    int n;
    int i;
    int flag;
    int attempts;

    printf("This program checks whether a number\n");
    printf("is prime or not.\n\n");

    printf("Enter Number: ");
    if (scanf("%d", &n) != 1)
    {
        printf("\tNope! Enter a number (^v^)\n\n");
        return 0;
    }

        
       

    // PRIME CHECK

    flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is a PRIME number.\n", n);
        printf("It is divisible only by 1 and itself.\n");
    }
    else
    {
        printf("%d is NOT a PRIME number.\n", n);
        printf("It has factors other than 1 and itself.\n");
    }


    return 0;
}