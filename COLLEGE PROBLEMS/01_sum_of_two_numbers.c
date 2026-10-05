#include <stdio.h> 

int main(){
    // Print sum of two numbers
    
    int a, b, c;

    printf("\n\nThis program prints the sum of two numbers where the numbers are taken as an input from the user.\n\n");


    printf("Enter Value of a:");
    if (scanf("%d", &a) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    

    printf("Enter the value of b:");
    if (scanf("%d", &b) != 1)
    {
        printf("...INVALID INPUT...");
        return 0;
    }

    // SUM
    c = a+b;

    printf("\n\nThe sum of given numbers is %d\n\n", c);
    return 0;
}