#include <stdio.h>

int main()
{
    float celcius;
    float farenheit;

    printf("Enter the temp in celcius.\n");
    scanf("%f", &celcius);

    farenheit = ((9.0 / 5.0) * celcius) + 32;

    printf("Temprature in farenheit is  %.2ff.\n", farenheit);

    return 0;
}