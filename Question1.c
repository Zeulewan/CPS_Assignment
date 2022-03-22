#include <stdio.h>

int main()
{
    int a;
    printf("GIVEN A MEDICAL ORDER IN\t\t CALCULATE RATE IN");

    printf("\n(1) ml/hr & drop factor\t\t\t drops / min");

    printf("\n(2) 1L for n hr\t\t\t\t ml/hr");

    printf("\n(3) mg/kg/hr & concentration in mg/ml\t ml/hr");

    printf("\n(4) units/hr & concentration in units/ml ml/hr");

    printf("\n(5) QUIT");

    printf("\nEnter a number for option of choice: ");

    scanf("%d", &a);
    if(a == 1)
    printf("You have selected option 1.");
    if(a == 2)
    printf("You have selected option 2.");
    if(a == 3)
    printf("You have selected option 3.");
    if(a == 4)
    printf("You have selected option 4.");
    if(a == 5)
    printf("You have quit the program.");
    else
    printf("You have entered an invalid option.");

    return 0;
}
