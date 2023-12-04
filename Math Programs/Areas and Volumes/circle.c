#include <stdio.h>

// To calculate the area and perimeter of a circle

#define PI 3.1415

int main(){
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Assuming the radius to be in centimeters: \n");
    printf("The perimeter of the circle is: %0.2fcm  %0.2fmm  %0.2fm\n", 2 * PI * radius, 2 * PI * radius * 10, 2 * PI * radius * 0.01);
    printf("The area of the circle is: %0.2fcm^2  %0.2fmm^2  %0.2fm^2", PI * radius * radius, 10 *PI * radius * radius, 0.01*PI * radius * radius);
    return 0;
}