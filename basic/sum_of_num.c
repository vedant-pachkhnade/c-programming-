#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number you want to sum.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of number is %d.\n", sum);
}