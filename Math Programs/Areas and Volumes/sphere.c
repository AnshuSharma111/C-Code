#include <stdio.h>
#include <math.h>

// To calculate the surface area and volume of a sphere

#define PI 3.1415

int main(){
    float radius;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    printf("Assuming the radius to be in centimeters: \n");
    printf("The surface area of the sphere is: %0.2fcm\t %0.2fmm\t%0.2fm\n", 4 * PI * pow(radius,2) , 4 * PI * pow(radius,2) * 10, 4 * PI * pow(radius,2) * 0.01);
    printf("The volume of the sphere is: %0.2fcm\t%0.2fmm\t%0.2fm", 1.33 * PI * pow(radius, 3) , 10 * 1.33 * PI * pow(radius, 3), 0.01*1.33 * PI * pow(radius, 3));
    return 0;
}