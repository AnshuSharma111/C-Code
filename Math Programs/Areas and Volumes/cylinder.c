#include <math.h>
#include <stdio.h>

// Program to find CSA, TSA, and volume of a cylinder

#define PI 3.1415

int main(){
    float r, h, csa, tsa, v;
    printf("Enter the radius and height of the cylinder (in cms): ");
    scanf("%f %f", &r, &h);

    v = PI * pow(r, 2) * h;
    csa = 2 * PI * r * h;
    tsa = 2 * PI * r * (r + h);

    printf("Assuming all input to be in cms:\n");
    printf("The volume of the cylinder is: %0.2fmm^3  %0.2fcm^3  %0.4fm^3\n", v*1000, v, ((v/100)/100)/100);
    printf("The CSA of the cylinder is: %0.2fmm^2  %0.2fcm^2  %0.3fm^2\n", csa*100, csa, (csa/100)/100);
    printf("The TSA of the cylinder is: %0.2fmm^2  %0.2fcm^2  %0.3fm^2", tsa*100, tsa, (tsa/100)/100);
    return 0;
}