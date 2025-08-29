#include <stdio.h>
int main()
{
    int a,b,div;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    div = a / b;

    printf("Division = %d", div);
    return 0;
}