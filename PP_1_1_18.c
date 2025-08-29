#include <stdio.h>
int main()
{
    int l,b,area,per;
    printf("Enter length and breadth: ");
    scanf("%d%d",&l,&b);

    area = l*b;
    per = 2*(l+b);

    printf("Area = %d\n", area);
    printf("Perimeter = %d", per);
    return 0;
}