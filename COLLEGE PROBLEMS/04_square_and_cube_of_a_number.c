#include <stdio.h>

int main()
{
    double a;
    double square, cube;
    int attempts;

    printf("\n========================================\n");
    printf("       SQUARE & CUBE PROGRAM (^v^)\n");
    printf("========================================\n\n");

    printf("Hello! This program calculates the square\n");
    printf("and cube of a number....\n\n");


    // INPUT A
    attempts = 0;

    while (attempts < 3)
    {
        printf("Enter A: ");

        if (scanf("%lf", &a) != 1)
        {
            attempts++;

            while (getchar() != '\n')
                ;

            printf("\tNope! Enter a number (^v^)\n");
        }
        else if (a > 100000 || a < -100000)
        {
            attempts++;

            printf("\n\tWHY IN THE WORLD would you want to square THAT?\n");
            printf("\tPlease enter a reasonably sized number (^v^)\n");
        }
        else
        {
            break;
        }

        if (attempts < 3)
        {
            printf("\tYou have %d attempt(s) left.\n\n", 3 - attempts);
        }
        else
        {
            printf("\nAlright bro......clearly you REALLY want to square that number.\n");
            printf("Program ending..... (^v^)\n\n");
            return 0;
        }
    }


    // CALCULATIONS

    square = a * a;
    cube = a * a * a;


    // RESULT

    printf("\n========================================\n");
    printf("                RESULT\n");
    printf("========================================\n\n");

    printf("A = %.2f\n\n", a);

    printf("Square of A = A x A\n");
    printf("            = %.2f x %.2f\n", a, a);
    printf("            = %.2f\n\n", square);

    printf("Cube of A = A x A x A\n");
    printf("          = %.2f x %.2f x %.2f\n", a, a, a);
    printf("          = %.2f\n", cube);


    printf("\n========================================\n");
    printf("       Calculation complete! (^v^)\n");
    printf("========================================\n\n");

    return 0;
}