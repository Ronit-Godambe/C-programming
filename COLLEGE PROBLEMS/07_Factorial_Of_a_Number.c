#include <stdio.h>

int main()
{
    int num;

    printf("This number prints factorial of a number entered by the user.\n");
    printf("Enter Number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("\n\n\t\t\t...INVALID INPUT...\n\n\n...illiterate people.....they don't know what a number is, and they are going for factorials!! (0_0)\n\n");
        return 0;
    }

    if (num < 0)
{
    printf("\nDear user, Factorial is not defined for negative numbers.............. (Jaa na zara Padh ke aa............anpadh)\n\n");
    return 0;
}

    int fact = 1;
    printf("\n\nFactorial of %d = ", num);
    for (int i = num; i > 0; i--)
    {

        /*


        if (i == 1)
        {
            printf("1");
            continue;
        }
        printf("%d", i);
        printf(" x ");
        fact = fact * i;



        */

        // this was ^^^^ correct too!!
        
        printf("%d", i);

        if(i>1){
            printf(" x ");
        }
        fact = fact * i;
    }

    printf("\n               = %d", fact);
    return 0;
}