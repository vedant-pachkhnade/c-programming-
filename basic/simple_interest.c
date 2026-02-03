#include <stdio.h>

int main()
{
    int p;
    int r;
    int t;
    float total;

    printf("Enter the value of principle amount.\n");
    scanf("%d", &p);

    printf("Enter the rate of interest.\n");
    scanf("%d", &r);

    printf("Enter time.\n");
    scanf("%d", &t);

    total = (p * r * t) / 100;

    printf("The simple interest is %.2f ruppes\n", total);

    return 0;
}