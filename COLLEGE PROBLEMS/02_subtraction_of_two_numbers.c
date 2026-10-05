#include <stdio.h>

int main()
{
    int a, b, choice, c;
    int attempts;


    printf("\n\nHello! This program prints the subtraction of two numbers, but it has its ways.... \n\n(Inputs are taken in A and B)\n\n");

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
            break;
        }

        attempts++;

        while (getchar() != '\n')
            ;

        printf("\tNope! Enter a number (^v^)\n");

        if (attempts < 3)
        {
            printf("\tYou have %d attempt(s) left.\n", 3 - attempts);
        }
        else
        {
            printf("\nI guess it's safe to conclude that whoever is running this program is illiterate......Program ending.....\n\n\n");
            return 0;
        }
    }

    // ASK USER FOR FORMAT
    attempts = 0;

    
    printf("\n\tHOW DO YOU WANT IT?\n\n");

    printf("Enter 0 : Positive difference (B-A or A-B)\t");
    printf("Enter 1 : A-B (negative answer allowed)\n");

    while (attempts < 3)
    {
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) == 1 &&
            (choice == 0 || choice == 1))
        {
            break;
        }

        attempts++;

        while (getchar() != '\n')
            ;

        printf("\tNope! Enter 0 or 1 (^v^)\n");

        if (attempts < 3)
        {
            printf("\tYou have %d attempt(s) left.\n", 3 - attempts);
        }
        else
        {
            printf("\nBro...... it's literally just 0 or 1 Program ending.....\n");
            return 0;
        }
    }


    printf("A = %d\tB = %d\n\n", a, b);

    // POSITIVE DIFFERENCE
    if (choice == 0)
    {
        if (a > b)
        {
            c = a - b;

            printf("Hence, A is greater than B.\n");
            printf("So we considered A-B.\n");
            printf("Therefore,\n");
            printf("A-B = %d - %d = %d\n", a, b, c);
        }
        else if (b > a)
        {
            c = b - a;

            printf("Hence, B is greater than A.\n");
            printf("So we considered B-A.\n");
            printf("Therefore,\n");
            printf("B-A = %d - %d = %d\n", b, a, c);
        }
        else
        {
            printf("A = B\n");
            printf("The difference is 0.\n");
        }
    }

    // A - B
    else
    {
        c = a - b;

        printf("You chose A-B.\n");
        printf("Therefore,\n");
        printf("A-B = %d - %d = %d\n", a, b, c);
    }


    return 0;
}








// #include <stdio.h>

// int main()
// {

//     int a, b, c;

//     printf("Hello! This program prints subtraction of two numbers but it has its ways. (inputs are taken in A and B)\n\n");

//     printf("Enter A:");
//     if (scanf("%d", &a) != 1)
//     {
//         printf("...INVALID INPUT...");
//         return 0;
//     }

//     printf("Enter B:");
//     if (scanf("%d", &b) != 1)
//     {
//         printf("...INVALID INPUT...");
//         return 0;
//     }

//     // This is where the fun begins
//     if (a > b)
//     {
//         printf("A = %d\t B = %d", a, b);
//         printf("Hence, A is greater than B");
//         printf("So we considered A-B");
//         printf("Therefore, A-B = %d - %d = %d", a, b, a - b);
//     }

//     else if (a < b)
//     {
//         printf("A = %d\t B = %d", a, b);
//         printf("Hence, B is greater than A");
//         printf("So we considered B-A");
//         printf("Therefore, B-A = %d - %d = %d", b, a, b - a);
//     }
//     else
//     {
//         printf("A = %d\t B = %d", a, b);
//         printf("A = B");
//         printf("The difference is 0");
//     }
//     return 0;
// }