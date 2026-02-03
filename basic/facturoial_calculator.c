#include <stdio.h>

int main()
{
    int n, factroial = 1;

    printf("Enter the number.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
     factroial = factroial * i;
    }
    printf("the factroial of %d is %d.\n", n, factroial);
    return 0;
}