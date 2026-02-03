#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter theh 1st number.\n");
    scanf("%d", &a);

    printf("Enter theh 2nd number.\n");
    scanf("%d", &b);

    printf("Enter theh 3rd number.\n");
    scanf("%d", &c);

    printf("Enter theh 4th number.\n");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d.\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d.\n", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest number is %d.\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest number is %d.\n", d);
    }

    return 0;
}