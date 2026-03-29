#include <stdio.h>
const double pi = 3.1415926;

int main(void)
{
    double rad = 0.0;
    double area = 0.0;
    double vol = 0.0;

    printf("Enter the radius of the sphere: ");

    if(scanf("%lf", &rad) !=1 || rad < 0){
        printf("Error: Enter a non-negative number!\n");
        return 1;
    }

    area = 4.0 * pi * rad * rad;
    vol = 4.0/3.0 * pi * rad * rad * rad;

    printf("\n%-12s %-15s %-15s\n", "Radius", "Area", "Volume");
    printf("%-12.2f %-15.2f %-15.2f\n", rad, area, vol);
    return 0;
}
