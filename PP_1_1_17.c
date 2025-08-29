#include <stdio.h>
int main()
{
    int l,area,per;
    printf("Enter side: ");
    scanf("%d",&l);

    area = l*l;
    per = 4*l;

    printf("Area = %d\n", area);
    printf("Perimeter = %d", per);
    return 0;
}