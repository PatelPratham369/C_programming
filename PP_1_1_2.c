#include <stdio.h>
int main()
{
    int x,y,sub;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    sub = x - y;

    printf("Subtraction = %d", sub);
    return 0;
}