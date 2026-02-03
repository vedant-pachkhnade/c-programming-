#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the charctor.\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("Your charctor is lowercase.\n");
    }
    else
    {
        printf("Your charctor is uppercase.\n");
    }

    return 0;
}