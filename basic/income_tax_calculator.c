#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter your annual income:\n");
    scanf("%f", &income);

    if (income <= 250000)
    {
        printf("You do not need to pay income tax because your income is below the taxable limit.\n");
    }
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        printf("Your income tax is %.2f\n", tax);
    }
    else if (income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (income - 500000);
        printf("Your income tax is %.2f\n", tax);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.20 * (1000000 - 500000) + 0.30 * (income - 1000000);
        printf("Your income tax is %.2f\n", tax);
    }

    return 0;
}
