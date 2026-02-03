#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the student marks.\n");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("You scored grade \'S\'.\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("You scored grade \'A\'.\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("You scored grade \'B\'.\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("You scored grade \'C\'.\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("You scored grade \'D\'.\n");
    }
    else if (marks >= 40 && marks < 50)
    {
        printf("You scored grade \'E\'.\n");
    }
    else if (marks >= 35 && marks < 40)
    {
        printf("You scored grade \'F\'.\n");
    }
    else
    {
        printf("Shame on you, you are \"failed\" !\n");
    }

    return 0;
}