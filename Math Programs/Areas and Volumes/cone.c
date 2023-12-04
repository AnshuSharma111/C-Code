#include <stdio.h>
#include <math.h>

// Program to find SA, Volume and slant height of a cone

#define PI 3.1415

int main(){
    float r, h, l, v, s;
    printf("Enter radius of cone: ");
    scanf("%f", &r);
    printf("Enter height of cone: ");
    scanf("%f", &h);

    l = sqrt(pow(r, 2) + pow(h, 2));
    v = 0.33 * PI * pow(r,2) * h;
    s = PI * r * (l + r);

    printf("Asuuming all entered values to be in centimeters:\n");
    printf("The slant height of the cone is: %0.2fcm %0.2fm %0.2fmm\n", l, l/100, l*10);
    printf("The surface area of the cone is: %0.2fcm^2 %0.2fm^2 %0.2fmm^2\n", s, s/100, s*10);
    printf("The volume of the cone is: %0.2fcm^3 %0.2fm^3 %0.2fmm^3", v, v/100, v*10);

    return 0;
}