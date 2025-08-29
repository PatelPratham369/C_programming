#include <stdio.h>
int main()
{
    float kg,g;
    printf("Enter kilograms: ");
    scanf("%f",&kg);

    g = kg * 1000;

    printf("%.2f kg = %.2f grams", kg, g);
    return 0;
}