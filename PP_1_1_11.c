#include <stdio.h>
int main()
{
    float g,kg;
    printf("Enter grams: ");
    scanf("%f",&g);

    kg = g / 1000;

    printf("%.2f grams = %.2f kg", g, kg);
    return 0;
}