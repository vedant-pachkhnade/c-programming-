#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number.\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i * n;
    }
    printf("the sum of multiplication table of %d id %d.\n", n, sum);

    return 0;
}