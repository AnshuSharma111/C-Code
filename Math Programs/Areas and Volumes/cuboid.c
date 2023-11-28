#include <stdio.h>
#include <math.h>

// Program to find surface area, volume and lateral surface area of cube or cuboid

int main(){
    float l, b, h;
    printf("Enter length, breadth and height of the cuboid: ");
    scanf("%f %f %f", &l, &b, &h);

    printf("The TSA of the cuboid is: %0.2f\n", 2*(l*b + b*h + h*l));
    printf("The LSA of the cuboid is: %0.2f\n", 2*h*(l+b));
    printf("The diagonal of the cuboid is: %0.2f\n", sqrt(pow(l,2) + pow(b,2) + pow(h,2)));
    printf("The volume of the cuboid is: %0.2f", l*b*h);

    return 0;
}