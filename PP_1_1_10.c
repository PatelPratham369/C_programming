#include <stdio.h>
int main()
{
    float d,rs,pound;
    printf("Enter dollars: ");
    scanf("%f",&d);

    rs = d * 48;
    pound = rs / 70;

    printf("%.2f dollars = %.2f pounds", d, pound);
    return 0;
}