#include <stdio.h>

int main()
{
    double m;
    double c = 300000;
    double c_square, E;
    int attempts;

    printf("\n========================================\n");
    printf("       EINSTEIN'S FORMULA (^v^)\n");
    printf("========================================\n\n");

    printf("This program calculates energy using:\n");
    printf("              E = m x c^2\n\n");

    printf("Where:\n");
    printf("E = Energy (Joules)\n");
    printf("m = Mass (Kg)\n");
    printf("c = Speed of light (m/s)\n\n");

    printf("The value of c is fixed at 300000 m/s.\n");
    printf("You only need to enter the mass (m).\n\n");


    // INPUT MASS

    attempts = 0;

    while (attempts < 3)
    {
        printf("Enter mass (m): ");

        if (scanf("%lf", &m) != 1)
        {
            attempts++;

            while (getchar() != '\n')
                ;

            printf("\tNope! Enter a number (^v^)\n");
        }
        else if (m < 0)
        {
            attempts++;

            printf("\tMass cannot be negative......nice try (^v^)\n");
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
            printf("\nThree attempts......and we still couldn't enter a mass.\n");
            printf("Program ending.....\n\n");
            return 0;
        }
    }


    // CALCULATIONS

    c_square = c * c;

    E = m * c_square;


    // RESULT

    printf("\n========================================\n");
    printf("              CALCULATION\n");
    printf("========================================\n\n");

    printf("Formula:\n");
    printf("E = m x c^2\n\n");

    printf("Step 1: Values\n");
    printf("m = %.2f\n Kg", m);
    printf("c = %.2f m/s\n\n", c);

    printf("Step 2: Calculate c^2\n");
    printf("c^2 = c x c\n");
    printf("    = %.2f x %.2f\n", c, c);
    printf("    = %.2f m/s\n\n", c_square);

    printf("Step 3: Calculate E\n");
    printf("E = m x c^2\n");
    printf("  = %.2f x %.2f\n", m, c_square);
    printf("  = %.2f J\n\n", E);

    printf("Therefore,\n");
    printf("Energy (E) = %.2f J\n", E);


    printf("\n\tCalculation complete! (^v^)\n\n");

    return 0;
}