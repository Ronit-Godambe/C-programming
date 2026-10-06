#include <stdio.h>

int main()
{
    printf("\nThis program prints square, cube, factorial of a specific number entered by the user and also check whether the number is prime or not.\n");
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    printf("\n\t1) Square of %d = %d", num, num * num);
    printf("\n\t2) Cube of %d = %d", num, num * num * num);

    int fact = 1;

    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }

    printf("\n\t3) Factorial of %d = %d", num, fact);

    int prime = 0;

    if (num <= 1)
    {
        printf("\n\t4) %d is not a prime number", num);
    }
    else
    {

        for (int m = 2; m < num; m++)
        {
            if (num % m == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 1)
        {
        printf("\n\t4) %d is not a prime number", num);
    }

    else
    {
        printf("\n\t4) %d is a prime number", num);
    }
    
}
    printf("\n\n");

    return 0;
}

