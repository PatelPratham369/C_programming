#include <stdio.h>
int main()
{
    float rs,d;
    printf("Enter Rs: ");
    scanf("%f",&rs);

    d = rs / 48;

    printf("%.2f Rs = %.2f dollars", rs, d);
    return 0;
}