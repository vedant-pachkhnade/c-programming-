#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number, which you want reverse multiplication table.\n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}