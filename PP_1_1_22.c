#include <stdio.h>
int main()
{
    float gross,net;
    printf("Enter gross sales: ");
    scanf("%f",&gross);

    net = gross - (0.1 * gross);

    printf("Net Sales = %.2f", net);
    return 0;
}