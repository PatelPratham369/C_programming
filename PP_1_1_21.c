#include <stdio.h>
int main()
{
    float gross,allow,deduct,net;
    printf("Enter gross salary: ");
    scanf("%f",&gross);

    allow = 0.1 * gross;
    deduct = 0.03 * gross;
    net = gross + allow - deduct;

    printf("Net Salary = %.2f", net);
    return 0;
}