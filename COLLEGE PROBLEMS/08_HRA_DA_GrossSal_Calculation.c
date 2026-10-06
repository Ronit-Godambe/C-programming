#include <stdio.h> 

int main(){
    printf("\n\nThis program prints HA DA and Gross salary when Basic Salary is entered by the user");
    float hra=0.2, da = 1.5, basic, gross;
    float hrapercent = 20;
    float dapercent = 150;
    printf("\n\n\tEnter Youtr Basic Salary: ");
    if (scanf("%f", &basic) != 1)
    {
        printf("\n\t    ...INVALID INPUT...\n\n(o_o) You were supposed to enter your salary (o_o)\n\n\n");
        return 0;
    }


    printf("\nSo Your basic salary is %.2f\n\n", basic);


    printf("HRA = %.1f%%\tDA = %.1f%%\n", hrapercent, dapercent);

    printf("Your HRA = %.2f x %.1f%%\n", basic, hrapercent);
    printf("\t= %.2f", hra*basic);

    printf("\n\nYour DA = %.2f x %.1f%%\n", basic, dapercent);
    printf("\t= %.2f", da*basic);


    printf("\n\nTherefore, Basic Salary = %.1f, HRA = %.1f, DA = %.1f", basic, hra*basic, da*basic);
    printf("\nGROSS SALARY = BASIC + HRA + DA");
    printf("\t = %.1f + %.1f + %.1f", basic, hra*basic, da*basic);
    printf("\t = %.1f", basic + (hra*basic) + (da*basic));





    
    return 0;
}