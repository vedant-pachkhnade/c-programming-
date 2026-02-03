#include <stdio.h>

int main()
{
    int r;
    float area;

    printf("Enter the redius of circle.\n");
    scanf("%d", &r);

    area = 3.14 * (r * r);

    printf("The area of circle is %.2f.\n", area);

    return 0;
}