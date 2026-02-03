#include <stdio.h>

int main()
{
    int math, physics, chemistry;
    float total;

    printf("Enter marks of Maths:\n");
    scanf("%d", &math);

    printf("Enter marks of Physics:\n");
    scanf("%d", &physics);

    printf("Enter marks of Chemistry:\n");
    scanf("%d", &chemistry);

    total = (math + physics + chemistry) / 3.0;

    if (math < 33 || physics < 33 || chemistry < 33)
    {
        printf("You are failed because marks in a subject are less than 33.\n");
    }
    else if (total < 40)
    {
        printf("You are failed due to total percentage less than 40%%.\n");
    }
    else
    {
        printf("Congratulations! You are passed.\n");
        printf("You scored %.2f%%.\n", total);
    }

    return 0;
}
