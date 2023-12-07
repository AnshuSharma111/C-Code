#include <stdio.h>
#include <math.h>

// To calculate the area and perimeter of a circle

#define PI 3.1415

int main(){
    float radius, p, a;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    p = 2 * PI * radius;
    a = PI * pow(radius, 2);

    printf("Assuming the radius to be in centimeters: \n");
    printf("The perimeter of the circle is: %0.2fcm  %0.2fmm  %0.2fm\n", p, p * 10, p/100);
    printf("The area of the circle is: %0.2fcm^2  %0.2fmm^2  %0.3fm^2", a, a * 100, (a/100)/100);
    return 0;
}