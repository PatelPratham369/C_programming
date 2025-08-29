#include <stdio.h>
int main()
{
    float d,rs;
    printf("Enter dollars: ");
    scanf("%f",&d);

    rs = d * 48;

    printf("%.2f dollars = %.2f Rs", d, rs);
    return 0;
}