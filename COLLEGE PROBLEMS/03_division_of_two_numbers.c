#include <stdio.h>

int main()
{
    int a, b;
    float c;
    int attempts;

    printf("\n\tDIVISION PROGRAM\n");

    printf("Hello! This program divides two numbers and gives the answer in decimal form....\n\n(Inputs are taken in A and B)\n\n");


    // INPUT A
    attempts = 0;

    while (attempts < 3)
    {
        printf("Enter A: ");

        if (scanf("%d", &a) == 1)
        {
            break;
        }

        attempts++;

        while (getchar() != '\n')
            ;

        printf("\tNope! Enter a number (^v^)\n");

        if (attempts < 3)
        {
            printf("\tYou have %d attempt(s) left.\n\n", 3 - attempts);
        }
        else
        {
            printf("\nI guess it's safe to conclude that whoever is running this program is illiterate......Program ending.....\n\n\n");
            return 0;
        }
    }


    // INPUT B
    attempts = 0;

    while (attempts < 3)
    {
        printf("\nEnter B: ");

        if (scanf("%d", &b) == 1)
        {
            if (b != 0)
            {
                break;
            }

            printf("\tNice try (^v^), but division by 0 is not allowed.\n");
        }
        else
        {
            printf("\tNope! Enter a number (^v^)\n");
        }

        attempts++;

        while (getchar() != '\n')
            ;

        if (attempts < 3)
        {
            printf("\tYou have %d attempt(s) left.\n", 3 - attempts);
        }
        else
        {
            printf("\nThree attempts......and somehow we still ended up here.\n");
            printf("Program ending.....\n\n");
            return 0;
        }
    }


    // DIVISION
    c = (float)a / b;

    printf("\n\tRESULT\n");

    printf("A = %d\tB = %d\n\n", a, b);

    printf("Therefore,\n");
    printf("A / B = %d / %d\n", a, b);
    printf("      = %.4f\n", c);


    printf("\n\tCalculation complete! (^v^)\n");

    return 0;
}