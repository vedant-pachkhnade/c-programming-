#include <stdio.h>

int main()
{
    int a;
    int b;
    int area;
    printf("Enter the length of rectangle.\n");
    scanf("%d", &a);

    printf("Enter the breadth of rectangle.\n");
    scanf("%d", &b);

    area = a * b;

    printf("Area of the rectangle is %dsqft", area);
    return 0;
}